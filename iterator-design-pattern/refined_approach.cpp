#include <iostream>
#include <memory>
#include <string>
#include <vector>

using namespace std;

// ========== Video class representing a single video ==========
class Video {
private:
    string title;

public:
    // Store the title of the video
    Video(string title) : title(std::move(title)) {}

    // Get the title of the video
    const string& getTitle() const {
        return title;
    }
};

// ========== Iterator interface (defines traversal contract) ==========
class PlaylistIterator {
public:
    virtual ~PlaylistIterator() = default;

    // Checks if more elements are left
    virtual bool hasNext() const = 0;

    // Returns the next element (nullptr when finished)
    virtual const Video* next() = 0;
};

// ================ Playlist interface ================
// Acts as a contract for collections that are iterable
class Playlist {
public:
    virtual ~Playlist() = default;

    // Method to return an iterator for the collection
    virtual unique_ptr<PlaylistIterator> createIterator() const = 0;
};

// ========== Concrete Iterator class ==========
// Implements the actual logic for traversing the YouTubePlaylist
class YouTubePlaylistIterator : public PlaylistIterator {
private:
    const vector<Video>& videos;
    size_t position;

public:
    // Constructor takes the collection to iterate over
    YouTubePlaylistIterator(const vector<Video>& videos)
        : videos(videos), position(0) {}

    // Check if more videos are left
    bool hasNext() const override {
        return position < videos.size();
    }

    // Return the next video in the playlist
    const Video* next() override {
        // If no next element, return nullptr to signal end
        if (!hasNext()) {
            return nullptr;
        }

        // Return pointer to the current element and move forward
        const Video* current = &videos[position];
        position++;
        return current;
    }
};

// ========== YouTubePlaylist class (Aggregate) ==========
// Implements Playlist to guarantee it provides an iterator
class YouTubePlaylist : public Playlist {
private:
    vector<Video> videos;

public:
    // Method to add a video to the playlist
    void addVideo(const Video& video) {
        videos.push_back(video);
    }

    // Instead of exposing the vector, return an iterator
    unique_ptr<PlaylistIterator> createIterator() const override {
        // Each call creates a fresh iterator, enabling independent traversals
        return make_unique<YouTubePlaylistIterator>(videos);
    }
};

// ========== Main method (Client code) ==========
int main() {
    // Create a playlist and add videos to it
    YouTubePlaylist playlist;
    playlist.addVideo(Video("LLD Tutorial"));
    playlist.addVideo(Video("System Design Basics"));

    // Client simply asks for an iterator, no access to internal data structure
    unique_ptr<PlaylistIterator> iterator = playlist.createIterator();

    // Iterate through the playlist using the provided interface
    while (iterator->hasNext()) {
        const Video* video = iterator->next();
        // Defensive check in case next() returns nullptr
        if (video != nullptr) {
            cout << video->getTitle() << "\n";
        }
    }

    return 0;
}