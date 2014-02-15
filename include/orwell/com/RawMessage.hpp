#pragma once

#include <string>
#include <memory>
#include <google/protobuf/message.h>

namespace orwell {
namespace com {

class RawMessage
{

public:
	std::string _routingId;
	std::string _type;
	std::string _payload;

	RawMessage();
	RawMessage(std::string const & iRoutId, std::string const & iType, std::string const & iPayload);

};

}} //namespace
