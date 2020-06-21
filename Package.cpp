#include <stdexcept>
#include "Package.h"

Package::Package(const std::string& senderName, const std::string& senderAddress, const std::string& senderCity,
const std::string& senderState, const int& senderZIP,
const std::string& recipientName, const std::string& recipientAddress, const std::string& recipientCity,
const std::string& recipientState, const int& recipientZIP,
const double& weight, const double& costPerOunce) {
	setSenderName(senderName);
	setSenderAdress(senderAddress);
	setSenderCity(senderCity);
	setSenderState(senderState);
	setSenderZIP(senderZIP);

	setRecipientName(recipientName);
	setRecipientAdress(recipientAddress);
	setRecipientCity(recipientCity);
	setRecipientState(recipientState);
	setRecipientZIP(recipientZIP);

	setWeight(weight);
	setCostPerOunce(costPerOunce);
}


Package& Package::setSenderName(const std::string& name){
	senderName = name;
	return *this;
}

Package& Package::setSenderAdress(const std::string& address) {
	senderAdress = address;
	return *this;
}
Package& Package::setSenderCity(const std::string& city) {
	senderCity = city;
	return *this;
}

Package& Package::setSenderState(const std::string& state) {
	senderState = state;
	return *this;
}

Package& Package::setSenderZIP(const int& zip) {
	senderZIP = zip;
	return *this;
}


Package& Package::setRecipientName(const std::string& name) {
	recipientName = name;
	return *this;
}

Package& Package::setRecipientAdress(const std::string& address) {
	recipientAdress = address;
	return *this;
}

Package& Package::setRecipientCity(const std::string& city) {
	recipientCity = city;
	return *this;
}
Package& Package::setRecipientState(const std::string& state) {
	recipientState = state;
	return *this;
}
Package& Package::setRecipientZIP(const int& zip) {
	recipientZIP = zip;
	return *this;
}

Package& Package::setWeight(const double& weight) {
	if (weight <= 0.0)
	{
		throw std::invalid_argument("Weight has to be higher than 0.");
	}

	this->weight = weight;
	return *this;
}
Package& Package::setCostPerOunce(const double& costRate) {
	if (costRate <= 0.0)
	{
		throw std::invalid_argument("The cost per ounce hast to be higher than 0.");
	}

	costPerOunce = costRate;
	return *this;
}


double Package::calculateCost() const {
	return ( getWeight() * getCostPerOunce() );
}