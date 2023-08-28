#pragma once
#include "stdafx.h"
#include "EuroScopePlugIn.h"
#include "Constant.hpp"
#include <sstream>
#include <vector>
#include <thread>
#include <mmsystem.h>
#include <string>
#include <iostream>
#include <ctime>


using namespace std;
using namespace EuroScopePlugIn;

class HKCPDisplay :
	public EuroScopePlugIn::CRadarScreen
{
protected:
public:

	HKCPDisplay();
	virtual ~HKCPDisplay();

	//---OnAsrContentLoaded--------------------------------------------

	virtual void OnAsrContentLoaded(bool Loaded);

	//---OnAsrContentToBeSaved------------------------------------------

	virtual void OnAsrContentToBeSaved();

	//---OnRefresh------------------------------------------------------

	virtual void OnRefresh(HDC hDC, int Phase);

	//---OnClickScreenObject-----------------------------------------

	virtual void OnClickScreenObject(int ObjectType, const char* sObjectId, POINT Pt, RECT Area, int Button);


	//---OnMoveScreenObject---------------------------------------------

	virtual void OnMoveScreenObject(int ObjectType, const char* sObjectId, POINT Pt, RECT Area, bool Released);

	//---OnButtonDownScreenObject---------------------------------------------

	virtual void OnButtonDownScreenObject(int ObjectType, const char* sObjectId, POINT Pt, RECT Area, int Button);

	//---OnButtonDownScreenObject---------------------------------------------

	virtual void OnButtonUpScreenObject(int ObjectType, const char* sObjectId, POINT Pt, RECT Area, int Button);

	virtual void OnDoubleClickScreenObject(int ObjectType, const char* sObjectId, POINT Pt, RECT Area, int Button);

	virtual void OnOverScreenObject(int ObjectType, const char* sObjectId, POINT Pt, RECT Area);

	virtual void OnFlightPlanControllerAssignedDataUpdate(CFlightPlan FlightPlan, int DataType);

	virtual bool OnCompileCommand(const char* sCommandLine);

	inline virtual void OnAsrContentToBeClosed(void)
	{
		delete this;
	};
};
