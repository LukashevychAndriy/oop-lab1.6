#pragma once
#include <string>

class Real
{
public:
	class Number
	{
	private:
		float number;
	public:
		float getNumber() const { return this->number; };
		void setNumber(float);

		Number add(Number, Number) const;
		Number multiply(Number, Number) const;

		void Init(float);
		void Read();
		void Display() const;
		std::string toString() const;
	};
	Number getNumber() const { return this->number; };
	void setNumber(Number);

	Real powReal(Real, Real) const;
	Real logReal(Real) const;

	void Init(Number);
	void Read();
	void Display() const;
	std::string toString() const;
private:
	Number number;
};
