#include "./Headers/date.h"

Date dateUpdate(Date today){
   
    Date tomorrow;

    if(today.day != numberOfDays (today) )
        setDate(tomorrow, today.month, today.day + 1, today.year);
    else if (today.month == December) // End of Year
        setDate( tomorrow, January, 1, today.year + 1);
    else                              // End of Month
        setDate (tomorrow, today.month + 1, 1, today.year);

    return tomorrow;
}
