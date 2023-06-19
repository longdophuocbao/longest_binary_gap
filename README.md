The following Math require you to use Visual Studio & code C to resolve

The following math require you to use Visual Studio and C language to answer.

Please upload your response by replying our email A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is surrounded by ones at both ends in the binary representation of N • Example: number 9 has binary representation 1001 and contains a binary gap of length 2. The number 529 has binary representation 1000010001 and contains 2 binary gaps, one of length 4 and one of length 3. The number 20 has binary representation 10100 and contains 1 binary gap of length 1. The no. 15 has binary representation 1111 and has no binary gaps. The number 32 has binary representation 100000 and has no binary gaps. Write a function: int solution(int N); that, given a positive integer N, returns the length of its longest binary gap. The function should return 0.if N doesn't contain a binary gap

    Response: longest_binary_gap_V1.c
• Example: given N = 1041 the function should return 5, because N has binary representation 10000010001 and so its longest binary gap is of length 5. Given N= 32 the function should return 0, because N has binary representation '100000' and thus no binary gaps. Write an efficient algorithm for the following assumptions: N is an integer within the range [1...2,147,483,647]
    
    Response: longest_binary_gap_V2.c