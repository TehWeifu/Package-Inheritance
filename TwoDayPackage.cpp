#include <stdexcept>
#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(const std::string& senderName, const std::string& senderAddress, const std::string& senderCity,
const std::string& senderState, const int& senderZIP,
const std::string& recipientName, const std::string& recipientAddress, const std::string& recipientCity,
const std::string& recipientState, const int& recipientZIP,
const double& weight, const double& costPerOunce, const double& flatFee)
: Package(senderName, senderAddress, senderCity, senderState, senderZIP, 
recipientName, recipientAddress, recipientCity, recipientState, recipientZIP, weight, costPerOunce) {
	setFlatFee(flatFee);
}

TwoDayPackage& TwoDayPackage::setFlatFee(const double& flatFee) {
	if (flatFee < 0.0)
	{
		throw std::invalid_argument("The falt fee can not be a negative number");
	}

	this->flatFee = flatFee;
	return *this;
}

double TwoDayPackage::calculateCost() const {
	return Package::calculateCost() + getFlatFee();
}