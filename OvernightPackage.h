#include "Package.h"

class OvernightPackage : public Package
{
public:
	OvernightPackage(const std::string&, const std::string&, const std::string&, const std::string&, const int&,
		const std::string&, const std::string&, const std::string&, const std::string&, const int&, const double&, const double&,
		const double&);

	OvernightPackage& setFeePerOunce(const double&);
	double getFeePerOunce() const { return feePerOunce; };

	double calculateCost() const;

private:
	double feePerOunce;
};

