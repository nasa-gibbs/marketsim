#include "offer.h"

unsigned int Offer::offerCounter = 0;

Offer::Offer(OfferType type, unsigned int quantity, float price, Account *account)
{
	this->quantity = quantity;
	this->price = price;
	this->account = account;
	this->status_ = Offer::PENDING;
	this->type_ = type;

	this->offerId = ++offerCounter;
}
