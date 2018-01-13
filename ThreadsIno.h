#ifndef tl
#define tl

#if (ARDUINO >= 100)
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

class ThreadManager {
	public:
		ThreadManager();

		void push(ThreadedApp app);
		void terminate(ThreadedApp app);
		void iterate(char method[] = "all");
		void focus(ThreadedApp app);
	private:
		std::vector<ThreadedApp> threads;
		ThreadedApp focusedThread;
};

class ThreadedApp {
	public:
		void background();
		void focused();
	private:
};

#endif