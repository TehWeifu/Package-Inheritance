#include "Package.h"

class TwoDayPackage : public Package
{
public:
	TwoDayPackage(const std::string&, const std::string&, const std::string&, const std::string&, const int&,
		const std::string&, const std::string&, const std::string&, const std::string&, const int&, const double&, const double&,
		const double&);

	TwoDayPackage& setFlatFee(const double&);
	double getFlatFee() const { return flatFee; };

	double calculateCost() const;

private:
	double flatFee;
};