#if !defined WRITE_FILE_H
#define WRITE_FILE_H

#include "Text.h"

#include <fstream>
using namespace std;

class WriteFile
{
	private:
		
		ofstream* output_file;
		bool closed;
		
	public:
	
		WriteFile(const char* file_name);
		~WriteFile();
		void writeLine(String* line);
		void close();
		
};

#endif
