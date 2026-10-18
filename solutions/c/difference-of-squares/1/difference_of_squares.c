#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number){
    unsigned int square_sum=0;
    for( unsigned int i=1; i<number+1; i++){
        square_sum+=i*i;
        }
    return square_sum;
}

unsigned int square_of_sum(unsigned int number){
    unsigned int sum_square=0;
    for(unsigned int i=1; i<number+1; i++){
        sum_square+=i;
    }
    sum_square =sum_square* sum_square;
    return sum_square;
}
unsigned int difference_of_squares(unsigned int number){
    return (square_of_sum(number)-sum_of_squares(number));
    
}