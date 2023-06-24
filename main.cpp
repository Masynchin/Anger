#include <iostream>
#include <string>

using namespace std;

// Интерфейс
class IMovie {
    public:
        // Конструктор по умолчачнию
        IMovie(): IMovie(0, 0, 0, 0, 0, "", "", "", "", "") {};

        // Главный констуктор
        IMovie(
            int duration,
            int gross,
            int released,
            int rating,
            int reviews,
            string language,
            string country,
            string title,
            string tagline,
            string author
        ) {
            this->duration = duration;
            this->gross = gross;
            this->released = released;
            this->rating = rating;
            this->reviews = reviews;
            this->language = language;
            this->country = country;
            this->title = title;
            this->tagline = tagline;
            this->author = author;
        }

        // Деструктор по умолчанию
        virtual ~IMovie() {}

        // Публичные методы
        virtual string pretty() = 0;
        virtual string detailed() = 0;
        virtual void tranlate() = 0;
        virtual void shorten() = 0;
        virtual void remake() = 0;
        virtual void advertise() = 0;
        virtual void recommend() = 0;
        virtual void show() = 0;

        // 🤮
        virtual void set_duration(int duration) = 0;
        virtual int get_duration() = 0;

        virtual void set_gross(int gross) = 0;
        virtual int get_gross() = 0;

        virtual void set_released(int released) = 0;
        virtual int get_released() = 0;

        virtual void set_rating(int rating) = 0;
        virtual int get_rating() = 0;

        virtual void set_reviews(int reviews) = 0;
        virtual int get_reviews() = 0;

        virtual void set_language(string language) = 0;
        virtual string get_language() = 0;

        virtual void set_country(string country) = 0;
        virtual string get_country() = 0;

        virtual void set_title(string title) = 0;
        virtual string get_title() = 0;

        virtual void set_tagline(string tagline) = 0;
        virtual string get_tagline() = 0;

        virtual void set_author(string author) = 0;
        virtual string get_author() = 0;

    private:
        // Приватные методы
        virtual void distribute() = 0;
        virtual void delay() = 0;

    protected:
        // Свойства
        int duration;
        int gross;
        int released;
        int rating;
        int reviews;
        string language;
        string country;
        string title;
        string tagline;
        string author;

};

// Реализация интерфейса
class Movie: public IMovie {
    public:
        // Констуктор по умолчанию
        Movie(): IMovie(111, 1509173, 2021, 10, 87158, "en", "UK", "The Electrical Life of Louis Wain", "-", "Will Sharpe") {};

        // 🤢
        void set_duration(int duration) { this->duration = duration; }
        int get_duration() { return this->duration; }

        void set_gross(int gross) { this->gross = gross; }
        int get_gross() { return this->gross; }

        void set_released(int released) { this->released = released; }
        int get_released() { return this->released; }

        void set_rating(int rating) { this->rating = rating; }
        int get_rating() { return this->rating; }

        void set_reviews(int reviews) { this->reviews = reviews; }
        int get_reviews() { return this->reviews; }

        void set_language(string language) { this->language = language; }
        string get_language() { return this->language; }

        void set_country(string country) { this->country = country; }
        string get_country() { return this->country; }

        void set_title(string title) { this->title = title; }
        string get_title() { return this->title; }

        void set_tagline(string tagline) { this->tagline = tagline; }
        string get_tagline() { return this->tagline; }

        void set_author(string author) { this->author = author; }
        string get_author() { return this->author; }

    private:
        // Приватные методы
        void distribute() { cout << "Here we go!" << endl; }
        void delay() { cout << "Sorry, will be released later!" << endl; }
};

int main() {
	return 0;
}
