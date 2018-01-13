#include <ThreadsIno.h>

ThreadManager::ThreadManager() {
	focusedThread = null;
}

ThreadManager::focus(ThreadedApp app) {
	if(std::find(threads.begin(), threads.end(), app) != threads.end()) {
		
	} else {
		
	}
}