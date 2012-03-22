//
//  AgCalendarView.h
//  AgCalendar
//
//  Created by Chris Magnussen on 01.10.11.
//  Copyright 2011 Appgutta DA. All rights reserved.
//
#import "TiModule.h"

@class Event;
@class Globals;

@interface AgCalendarModule : TiModule 
{
    Event *dataStore;
    Globals *global;
}

@end
