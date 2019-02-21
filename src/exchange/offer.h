#ifndef OFFER_H
#define OFFER_H

#define CURRENT 0.0

// The Offer class represents a bid or ask offer for a certain currency.
// The desired currency in question (as well as the currency that will be used
// to buy the latter) are implicitely determined from the CurrencyPair in which
// the Offer is stored, as well as wether it is in the bids queue or the ask queue
class Account;
class Offer{
	public:
		enum Status{PENDING, PROCESSING, FULFILLED, CANCELLED};

		Offer(unsigned int quantity, float price, Account *account);
		unsigned int quantity = 0;
		float price = 0.0;
		unsigned int offerId = 0;
		Account *account = nullptr;
		Status status_;

	static unsigned int offerCounter;
};

#endif
