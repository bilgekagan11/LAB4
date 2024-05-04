#ifndef BOOK_H
#define BOOK_H

namespace Item {
	class Book : Item::Item {

	private:
		int ISBN;
		int Author;
		int PrintDate;
		int Publisher;
	};
}

#endif
