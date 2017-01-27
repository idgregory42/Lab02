#if !defined (NULL)
#define NULL 0
#endif

#include "ReadFile.h"
#include "WriteFile.h"
#include "text.h"


int main()
{
	//ReadFile and WriteFile objects
	ReadFile* rf = new ReadFile("cds.txt");
	WriteFile* wf = new WriteFile("out.txt");
	
	String* cmd_message = new String("\n\r** Writing to file!\n");
	cmd_message->displayString();
	
	cmd_message = NULL;
	delete cmd_message;
	
	while(!rf->eof())
	{
		String* line = rf->readLine();
		wf->writeLine(line);
		delete line; //for memory
	}
	
	//Closes the files
    rf->close();
	wf->close();
	
	cmd_message = new String("\n\r ** Done!\n\r");
	cmd_message->displayString();
	
	cmd_message = NULL;
	delete cmd_message;
	
	//Delete to avoid memory a memory leak
	delete rf;
	delete wf;
	
   
	return 0;
}