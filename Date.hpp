int max (int a, int b)
{
   if (a>b) return(a) ; else return (b);
}

int min (int a, int b)
{
   if (a>b) return(b); else return (a);
}

class Date
{
   private :
      unsigned int hours, minutes, seconds;
      unsigned int days, months, years;
      unsigned int daysSoFar();

   public :
      Date(unsigned int h = 0, unsigned int m  = 0, unsigned int s = 0, unsigned int d = 1, unsigned int n  = 1, unsigned int y = 1);
      void setDate(unsigned int h, unsigned int m, unsigned int s, unsigned int d, unsigned int n, unsigned int y);
      void setHours(unsigned int h);
      void setMinutes(unsigned int m);
      void setSeconds(unsigned int s);
      void setDay(unsigned int day);
      int getDay();
      void setMonth(unsigned int mon);
      int getMonth();
      void setYear(unsigned int yr);
      int getYear();
};

Date::Date(unsigned int h, unsigned int m, unsigned int s, unsigned int d, unsigned int n, unsigned int y)
{
   static unsigned int length[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   while (s > 59){ m++; s -= 60; }
   while (m > 59){ h++; m -= 60; }
   while (h > 23){ d++; h -= 24; }
   while (d > length[m]){ n++; d -= length[n]; }
   while (n > 12){ y++; n -= 12; }

   this->seconds = s;
   this->minutes = m;
   this->hours = h;
   this->days = d;
   this->months = m;
   this->years = y;
}

void Date::setDate(unsigned int h, unsigned int m, unsigned int s, unsigned int d, unsigned int n, unsigned int y)
{
   static unsigned int length[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   while (s > 59){ m++; s -= 60; }
   while (m > 59){ h++; m -= 60; }
   while (h > 23){ d++; h -= 24; }
   while (d > length[m]){ n++; d -= length[n]; }
   while (n > 12){ y++; n -= 12; }

   this->seconds = s;
   this->minutes = m;
   this->hours = h;
   this->days = d;
   this->months = m;
   this->years = y;
}
 
void Date::setHours(unsigned int hours)
{
    this->hours = hours;
}

void Date::setMinutes(unsigned int minutes)
{
    this->minutes = minutes;
}

void Date::setSeconds(unsigned int seconds)
{
    this->seconds = seconds;
}

unsigned int Date::daysSoFar()
{
   unsigned int total = 0;
   static unsigned int length[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   for (int i=1; i < this->months; i++) total += length[i];
   total += this->days;
   return (total);
}

void Date::setDay(unsigned int day)
{
   day = max(1, day);
   this->days = min(day, 31);
}

int Date::getDay()
{
   return this->days;
}

void Date::setMonth(unsigned int mon)
{
   mon = max(1, mon);
   this->months = min(mon, 12);
}

int Date::getMonth()
{
   return this->months;
}

void Date::setYear(unsigned int yr)
{
   this->years = yr;
}

int Date::getYear()
{
   return this->years;
}
