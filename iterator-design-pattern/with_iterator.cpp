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

// ========== YouTubePlaylist class (Aggregate) ==========
class YouTubePlaylist {
private:
    vector<Video> videos;

public:
    // Method to add video to playlist
    void addVideo(const Video& video) {
        videos.push_back(video);
    }

    // Method to expose internal video list (still not ideal)
    const vector<Video>& getVideos() const {
        return videos;
    }
};

// ========== Iterator interface ==========
class PlaylistIterator {
public:
    // Ensure proper cleanup through base pointer
    virtual ~PlaylistIterator() = default;

    // Checks if more elements are left
    virtual bool hasNext() const = 0;

    // Returns the next element (nullptr when finished)
    virtual const Video* next() = 0;
};

// ========== Concrete Iterator class ==========
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

// ========== Main method (Client code) ==========
int main() {
    // Create a playlist and add videos
    YouTubePlaylist playlist;
    playlist.addVideo(Video("LLD Tutorial"));
    playlist.addVideo(Video("System Design Basics"));

    // Client directly creates the iterator using internal list (not ideal)
    unique_ptr<PlaylistIterator> iterator =
        make_unique<YouTubePlaylistIterator>(playlist.getVideos());

    // Use the iterator to loop through the playlist
    while (iterator->hasNext()) {
        const Video* video = iterator->next();
        // Defensive check in case next() returns nullptr
        if (video != nullptr) {
            cout << video->getTitle() << "\n";
        }
    }

    return 0;
}