#include <stdexcept>
#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const std::string& senderName, const std::string& senderAddress, const std::string& senderCity,
const std::string& senderState, const int& senderZIP,
const std::string& recipientName, const std::string& recipientAddress, const std::string& recipientCity,
const std::string& recipientState, const int& recipientZIP,
const double& weight, const double& costPerOunce, const double& feePerOunce)
: Package(senderName, senderAddress, senderCity, senderState, senderZIP,
recipientName, recipientAddress, recipientCity, recipientState, recipientZIP, weight, costPerOunce) {
	setFeePerOunce(feePerOunce);
}

OvernightPackage& OvernightPackage::setFeePerOunce(const double& fee) {
	if (fee < 0.0)
	{
		throw std::invalid_argument("The additional fee per ounce can not be a negative number.");
	}

	feePerOunce = fee;
	return *this;
}

double OvernightPackage::calculateCost() const {
	return getWeight() * (getCostPerOunce() + getFeePerOunce());
}