#include <iostream>
#include <string>
#include <vector>

using namespace std;

// A simple Video class with title
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

// YouTubePlaylist class holds a list of Video objects
class YouTubePlaylist {
private:
    vector<Video> videos;

public:
    // Add a video to the playlist
    void addVideo(const Video& video) {
        videos.push_back(video);
    }

    // Expose the video list (this is the main design issue)
    const vector<Video>& getVideos() const {
        return videos;
    }
};

// Client Code
int main() {
    YouTubePlaylist playlist;
    playlist.addVideo(Video("LLD Tutorial"));
    playlist.addVideo(Video("System Design Basics"));

    // Loop through videos and print titles
    for (const auto& v : playlist.getVideos()) {
        cout << v.getTitle() << "\n";
    }

    return 0;
}