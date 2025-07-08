# DATA-COMPRESSION-TOOL

*COMPANY* : CODETECH IT SOLUTIONS

*NAME* : KUNAL YADAV

*INTERN ID* : CT04DN1692

*DOMAIN* : C LANGUAGE

*DURATION* : 4 WEEKS

*MENTOR* : NEELA SANTHOSH KUMAR

As part of my internship, I was assigned a project to implement a data compression and decompression tool using the Run-Length Encoding (RLE) algorithm in the C programming language. The primary objective of this project was to gain hands-on experience with data compression techniques and understand how redundancy in data can be reduced to save storage space and optimize transmission.

I used Visual Studio Code (VS Code) as my development environment for its efficient debugging capabilities, syntax highlighting, and support for C language extensions. The program was designed to take an input string (either entered by the user or read from a text file), compress it using the RLE algorithm, and then decompress the output back to its original form to verify data integrity.

Run-Length Encoding (RLE) works by identifying consecutive repeating characters in a string and replacing them with a single character followed by the count of repetitions. For example, the input string "aaaaaahhhhhmmmmmmyyyyrrrssttbb" would be compressed to "a6h5m6y4r3s2t2b2". This method is especially useful for data containing many repeated characters, such as simple graphics or text with lots of spaces.

The program I developed had two main components:

Compression Function: This function scanned the input string, counted the occurrences of each character consecutively, and stored the character along with its count. It handled edge cases such as single characters (e.g., "a1") and transitions between different characters correctly.
Decompression Function: This function reversed the compression by expanding the encoded string. It read each character and its count, then reconstructed the original string by repeating the character accordingly.
One challenge I encountered during development was handling multi-digit counts in decompression (e.g., "a12" for twelve ‘a’s). I resolved this by adding logic to parse numbers of arbitrary length instead of assuming single-digit counts. I also included input validation to ensure that the compressed format adhered to the expected pattern, preventing errors during decompression.

To further improve usability, I added options to allow the user to select whether they wanted to compress or decompress a given input. The program included clear instructions and output messages to guide users through each step.

The final result was a functional, efficient, and interactive C program capable of performing both compression and decompression using RLE. It demonstrated a real-world application of basic algorithms and string manipulation techniques in C. The tool worked with both user-provided strings and file-based input, making it versatile for different use cases.

This project enhanced my understanding of algorithm implementation, file handling, input validation, and string processing in C. It also gave me insight into how simple compression methods are used in applications ranging from data transmission to image formats like BMP and TIFF.

Overall, this task deepened my knowledge of data compression fundamentals and helped me build a working tool that reflects the real-world utility of algorithmic problem-solving in systems programming.

*OUTPUT* :
