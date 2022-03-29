#include <string>
#include <vector>

#pragma once

namespace kb
{

	//--------------------------------------------------------------------
	//	annotation file (ndpa) output by ndpi viewer 
	//--------------------------------------------------------------------
	class slide_annotation
	{
	public:
		slide_annotation()
		{
			m_coordformat = "nanometers";
			m_showtitle = "1";
			m_showhistogram = "0";
			m_showlineprofile = "0";
			m_x = "0";
			m_y = "0";
			m_z = "0";

			m_annotation_type = "freehand";
			m_annotation_displayname = "AnnotateRectangle";
			m_annotation_measuretype = "0";
			m_annotation_closed = "1";
			m_annotation_specialtype = "rectangle";

			m_annotation_radius_f = 0.0;
			m_annotation_radius_i = 0;
		}

		inline void clear()
		{
			m_coordformat = "";
			m_showtitle = "1";
			m_showhistogram = "0";
			m_showlineprofile = "0";
			m_x = "0";
			m_y = "0";
			m_z = "0";

			m_annotation_type = "freehand";
			m_annotation_displayname = "AnnotateRectangle";
			m_annotation_measuretype = "0";
			m_annotation_closed = "1";
			m_annotation_specialtype = "";
			m_annotation_radius = "";

			m_pointlist_i.clear();
		}

		//	
		int m_id;
		std::string m_title;
		std::string m_details;
		std::string m_lens;

		//	ndpa‚ÉŽg‚í‚ê‚é
		//	nanometers
		std::string m_coordformat;

		std::string m_x, m_y, m_z;
		std::string m_showtitle;
		std::string m_showhistogram;
		std::string m_showlineprofile;

		std::string m_annotation_type;
		std::string m_annotation_displayname;

		//
		//std::string m_annotation_color;
		//[2]=R
		//[1]=G
		//[0]=B
		int m_color[3];
		std::string m_annotation_measuretype;
		std::string m_annotation_closed;

		//
		std::vector<int> m_pointlist_i;

		//
		std::string m_annotation_radius;
		double m_annotation_radius_f;
		int m_annotation_radius_i;
		//
		std::string m_annotation_specialtype;
	};
};