/**
 * Write a full class definition for a class named `Acc2`, and
 * containing the following members:
 * - A data member named `sum` of type integer
 * - A constructor accepting no parameters. The constructor
 * initializes the data member `sum` to 0
 * - A function named `getSum` that accepts no parameters and
 * returns an integer. `getSum` returns the value of `sum`
 */

class Acc2
{
	private:
		int sum;
	public:
		Acc2() { sum = 0; }
		int getSum() { return sum; }
};