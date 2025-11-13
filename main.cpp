#include "LogInSys.h"
#include "Design.h"
#include "mainMenu.h"

#include <chrono>
#include <thread>
using namespace std;

int main(int argc, char** argv) {
	txtAnimation("Welcome to the Government Management System!!", 10);
	this_thread::sleep_for(chrono::seconds(2));
	loginSys();
	return 0;
}
