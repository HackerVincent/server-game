#pragma once

#include <string>
#include <log4cxx/logger.h>

//protobuf
#include "controller.pb.h"
#include "InterfaceProcess.hpp"

namespace orwell {

namespace messages {
	class Hello;
}
namespace game {
	class Game;
}

namespace callbacks {

class ProcessHello : public InterfaceProcess
{
public:
	void execute();


private:
};

}} //namespaces

