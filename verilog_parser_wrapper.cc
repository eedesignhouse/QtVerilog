
/*!
@file verilog_parser_wrapper.c
@brief Contains implementations of functions declared in verilog_parser.h
*/

#include "verilogcode.h"
//#include "verilog_ast.hh"
#include "verilog.yy.hh"

namespace yy {
	void VerilogCode::verilog_parser_init()
	{
		if(yy_preproc == NULL)
		{
			//printf("Added new preprocessor context\n");
			yy_preproc = verilog_new_preprocessor_context();
		}
		if(yy_verilog_source_tree == NULL)
		{
			//printf("Added new source tree\n");
			yy_verilog_source_tree = verilog_new_source_tree();
		}
	}

	/*!
	@brief Perform a parsing operation on the currently selected buffer.
	*/
	int VerilogCode::verilog_parse_file(FILE * to_parse)
	{
		// TODO
		//YY_BUFFER_STATE new_buffer = yy_create_buffer(to_parse, YY_BUF_SIZE);
		//yy_switch_to_buffer(new_buffer);
		//yylineno = 0; // Reset the global line counter, we are in a new file!

		int result = parser->parse();
		return result;
	}

	/*!
	@brief Perform a parsing operation on the supplied in-memory string.
	*/
	int VerilogCode::verilog_parse_string(char * to_parse, int length)
	{
		// TODO
		//YY_BUFFER_STATE new_buffer = yy_scan_bytes(to_parse, length);
		//yy_switch_to_buffer(new_buffer);

		int result = parser->parse();
		return result;
	}


	/*!
	@brief Perform a parsing operation on the supplied in-memory string.
	*/
	int VerilogCode::verilog_parse_buffer(char * to_parse, int length)
	{
		// TODO
		//YY_BUFFER_STATE new_buffer = yy_scan_buffer(to_parse, length);
		//yy_switch_to_buffer(new_buffer);

		int result = parser->parse();
		return result;
	}
}
