#pragma once

#include <string>

class Package
{
public:
	Package(const std::string&, const std::string&, const std::string&, const std::string&, const int&,
		const std::string&, const std::string&, const std::string&, const std::string&, const int &, const double&, const double&);

	//These are all the set/get methods for each data member of the class
	Package& setSenderName(const std::string&);
	Package& setSenderAdress(const std::string&);
	Package& setSenderCity(const std::string&);
	Package& setSenderState(const std::string&);
	Package& setSenderZIP(const int&);

	Package& setRecipientName(const std::string&);
	Package& setRecipientAdress(const std::string&);
	Package& setRecipientCity(const std::string&);
	Package& setRecipientState(const std::string&);
	Package& setRecipientZIP(const int&);

	Package& setWeight(const double&);
	Package& setCostPerOunce(const double&);


	std::string getSenderName() const { return senderName; };
	std::string getSenderAdress() const { return senderAdress; };
	std::string getSenderCity() const { return senderCity; };
	std::string getSenderState() const { return senderState; };
	int getSenderZIP()const { return senderZIP; };

	std::string getRecipientName() const { return recipientName; };
	std::string getRecipientAdress() const { return recipientAdress; };
	std::string getRecipientCity() const { return recipientCity; };
	std::string getRecipientState() const { return recipientState; };
	int getRecipientZIP()const { return recipientZIP; };

	double getWeight() const { return weight; };
	double getCostPerOunce() const { return costPerOunce; };


	double calculateCost() const;

private:
	std::string senderName;
	std::string senderAdress;
	std::string senderCity;
	std::string senderState;
	int senderZIP;

	std::string recipientName;
	std::string recipientAdress;
	std::string recipientCity;
	std::string recipientState;
	int recipientZIP;

	double weight;
	double costPerOunce;
};