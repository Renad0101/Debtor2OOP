#pragma once


class DateTime
{
private:
    int _day = 0;
    string _month = "";
    int _year = 0;
public:

    DateTime() = default;

    DateTime(string month, int day, int year) 
    {
        set_day(day);
        set_month(month);
        set_year(year);
    }


   

    
    void set_year(int year)
    {
        if (year < 0)
            throw"wrong year";
        else
            _year = year;
    }


     void set_day(int day)
    {
        if (day < 0)
            throw"wrong day";
        else
            _day = day;
    }

     void set_month(string month)
     {
         if (month.length() < 2)
             throw"wrong month name";
         else
             _month = month;
     }



    int get_day()
    { 
        return _day;
    }

    int get_year() 
    { 
        return _year;
    }

    string get_month() 
    { 
        return _month;
    }
};

class Debtor
{
    string _fullname = "";
    DateTime _birthDay;
    string _phone = "";
    string _email = "";
    string _address = "";
    int _debt = 0;
public:
    Debtor() = default;
    Debtor(string fullname, DateTime birthDay, string phone, string email, string address, int debt)
    {
        set_fullname(fullname);
        set_debt(debt);
        set_phone(phone);
        set_address(address);
        set_email(email);
        _birthDay = birthDay;
    }


   

    void set_phone(string phone) 
    {
        if (phone.length() < 0)
            throw"Phone number is incorrect";
        else
            _phone = phone;
    }


    void set_address(string address)
    {
        if (address.length() < 0)
            throw"Adress is incorrect";
        else
            _address = address;
    }

    void set_debt(int debt) 
    {
        if (debt < 0)
            throw"Debt is incorrect";
        else
            _debt = debt;
    }

    void set_fullname(string fullname)
    {
        if (fullname.length() < 0)
            throw"Fullname is Incorrect";
        else
            _fullname = fullname;
    }

    void set_email(string email)
    {
        if (email.length() < 0)
            throw"Email is incorrect";
        else
            _email = email;
    }

    string get_FullName()
    {
        return _fullname;
    }

    DateTime get_Birthday()
    {
        return _birthDay; 
    }


    string get_Phone()
    { 
        return _phone;
    }

    string get_Email()
    {
        return _email;
    }

    string get_Address() 
    {
        return _address; 
    }

    int get_Debt() 
    {
        return _debt; 
    }

    void print() {
        cout << "Name: " << _fullname << endl;
        cout << "Birthday: " << _birthDay.get_day() << "/" << _birthDay.get_month() << "/" << _birthDay.get_year() << endl;
        cout << "Phone: " << _phone << endl;
        cout << "Email: " << _email << endl;
        cout << "Address: " << _address << endl;
        cout << "Debt: " << _debt << endl;

        cout << '\n';
    }
};