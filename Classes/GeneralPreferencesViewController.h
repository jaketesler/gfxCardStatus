//
//  GeneralPreferencesViewController.h
//  gfxCardStatus
//
//  Created by Michal Vančo on 7/11/11.
//  Copyright 2011 Michal Vančo. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "GSPreferencesModule.h"
#import "GSPreferences.h"

@interface GeneralPreferencesViewController : NSViewController <GSPreferencesModule>

@property (strong) IBOutlet NSButton *prefChkSmartIcons; // use first letter of GPU to determine icon

@property (strong) IBOutlet NSButton *prefChkUpdate;  // check for updates on startup
@property (strong) IBOutlet NSButton *prefChkStartup; // start at login
@property (strong) IBOutlet NSButton *prefChkGrowl;   // display gpu change notifications
@property (strong) IBOutlet NSButton *prefChkDepend; //check for dependencies when switching to integrated //ADDED
- (IBAction)checkboxClicked:(id)sender;

@property (strong) GSPreferences *prefs;


@property (weak) IBOutlet NSButton *shouldCheckForDepend;
/*{
 [prefChkDepend:[sender state] ? YES : NO];
 if ( [prefChkDepend state] )
 CFPreferencesSetAppValue( CFSTR("Bool Value Key"),
 kCFBooleanTrue, CFSTR(""));
 else
 CFPreferencesSetAppValue( CFSTR("Bool Value Key"),
 kCFBooleanFalse, CFSTR(""));
 }*/

/*+ (BOOL)shouldCheckDepend
 {
 return Boolvaluekey prefCheckDepend
 }*/


@end
