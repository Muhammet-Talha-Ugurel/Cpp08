#include "Span.hpp"
#include <stdlib.h>

int main() 
{
    std::cout << "------------------" << std::endl;
    try {
        Span span(5);
        span.addNumber(6);
		span.addNumber(3);
		span.addNumber(17);
		span.addNumber(9);
		span.addNumber(11);

        int shortest = span.shortestSpan();
        std::cout << "Shortest span: " << shortest << std::endl;

        int longest = span.longestSpan();
        std::cout << "Longest span: " << longest << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    try {
		Span sp = Span(1);
    	sp.addNumber(1);
    	std::cout << sp.shortestSpan() << std::endl;
    	std::cout << sp.longestSpan() << std::endl;
    }	
    catch (const std::exception &e)
    {
    	std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << "------------------" << std::endl;

    Span talin = Span(5);
    srand(time(NULL));
    std::vector<int> vec; 
	for(int i = 0; i < 5; i++)
        vec[i] = rand() % 9;
    talin.addRange(vec.begin(), vec.end());
    std::cout << talin.shortestSpan() << std::endl;
    std::cout << talin.longestSpan() << std::endl;

}
