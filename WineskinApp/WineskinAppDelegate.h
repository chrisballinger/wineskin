//
//  WineskinAppDelegate.h
//  Wineskin
//
//  Copyright 2011-2013 by The Wineskin Project and Urge Software LLC All rights reserved.
//  Licensed for use under the LGPL <http://www.gnu.org/licenses/lgpl-2.1.txt>
//

#import <Cocoa/Cocoa.h>

@interface WineskinAppDelegate : NSObject // <NSOutlineViewDataSource> //<NSApplicationDelegate>
{
	int disableButtonCounter;
	BOOL disableXButton;
	BOOL winetricksDone;
	BOOL usingAdvancedWindow;
	
	//main window
    IBOutlet NSWindow *window;
	IBOutlet NSWindow *chooseExeWindow;
	IBOutlet NSPopUpButton *exeChoicePopUp;
	IBOutlet NSWindow *helpWindow;
	IBOutlet NSWindow *aboutWindow;
	IBOutlet NSWindow *installerWindow;
	IBOutlet NSTextField *aboutWindowVersionNumber;
	
	//Screen Options window
	IBOutlet NSWindow *screenOptionsWindow;
	IBOutlet NSMatrix *automaticOverrideToggle;
	IBOutlet NSButtonCell *automaticOverrideToggleOverrideButton;
	IBOutlet NSButtonCell *fullscreenRootlessToggleFullscreenButton;
	IBOutlet NSButtonCell *normalWindowsVirtualDesktopToggleVirtualDesktopButton;
	IBOutlet NSButtonCell *forceNormalWindowsUseTheseSettingsToggleUseTheseSettingsButton;
	IBOutlet NSButtonCell *automaticOverrideToggleAutomaticButton;
	IBOutlet NSMatrix *fullscreenRootlessToggle;
	IBOutlet NSTabView *fullscreenRootlesToggleTabView;
	IBOutlet NSButtonCell *fullscreenRootlessToggleRootlessButton;
	IBOutlet NSMatrix *normalWindowsVirtualDesktopToggle;
	IBOutlet NSButtonCell *normalWindowsVirtualDesktopToggleNormalWindowsButton;
	IBOutlet NSMatrix *forceNormalWindowsUseTheseSettingsToggle;
	IBOutlet NSButtonCell *forceNormalWindowsUseTheseSettingsToggleForceButton;
	IBOutlet NSPopUpButton *virtualDesktopResolution;
	IBOutlet NSPopUpButton *fullscreenResolution;
	IBOutlet NSPopUpButton *colorDepth;
	IBOutlet NSPopUpButton *switchPause;
	IBOutlet NSSlider *gammaSlider;
	IBOutlet NSButton *windowManagerCheckBoxButton;
    IBOutlet NSButton *useMacDriverInsteadOfX11CheckBoxButton;
    IBOutlet NSButton *useD3DBoostIfAvailableCheckBoxButton;
	IBOutlet NSButton *autoDetectGPUInfoCheckBoxButton;
	
	//advanced menu
	IBOutlet NSWindow *advancedWindow;
	IBOutlet NSButton *testRunButton;
	IBOutlet NSButton *advancedInstallSoftwareButton;
    IBOutlet NSButton *advancedSetScreenOptionsButton;
	IBOutlet NSProgressIndicator *toolRunningPI;
	IBOutlet NSTextField *toolRunningPIText;
	IBOutlet NSTabView *tab;
	IBOutlet NSTextField *wrapperVersionText;
	IBOutlet NSTextField *engineVersionText;
	
	//advanced menu - Configuration Tab
	IBOutlet NSTextField *windowsExeTextField;
	IBOutlet NSTextField *exeFlagsTextField;
	IBOutlet NSTextField *menubarNameTextField;
	IBOutlet NSTextField *versionTextField;
	IBOutlet NSTextField *wineDebugTextField;
	IBOutlet NSTextField *customCommandsTextField;
	IBOutlet NSButton *useStartExeCheckmark;
	IBOutlet NSImageView *iconImageView;
	IBOutlet NSButton *exeBrowseButton;
	IBOutlet NSButton *iconBrowseButton;
	IBOutlet NSPopUpButton *extPopUpButton;
	IBOutlet NSButton *extEditButton;
    IBOutlet NSButton *extPlusButton;
	IBOutlet NSButton *extMinusButton;
	
	//advanced menu - Tools Tab
	IBOutlet NSButton *winecfgButton;
	IBOutlet NSButton *regeditButton;
	IBOutlet NSButton *taskmgrButton;
	IBOutlet NSButton *uninstallerButton;
	IBOutlet NSButton *rebuildWrapperButton;
	IBOutlet NSButton *refreshWrapperButton;
	IBOutlet NSButton *winetricksButton;
	IBOutlet NSButton *customExeButton;
	IBOutlet NSButton *changeEngineButton;
	IBOutlet NSTextField *currentVersionTextField;
	IBOutlet NSButton *updateWrapperButton;
    IBOutlet NSButton *commandLineWineTestButton;
	
	//advanced menu - Options Tab
	IBOutlet NSButton *alwaysMakeLogFilesCheckBoxButton;
    IBOutlet NSButton *setMaxFilesCheckBoxButton;
	IBOutlet NSButton *optSendsAltCheckBoxButton;
	IBOutlet NSButton *emulateThreeButtonMouseCheckBoxButton;
	IBOutlet NSButton *mapUserFoldersCheckBoxButton;
	IBOutlet NSButton *modifyMappingsButton;
	IBOutlet NSButton *confirmQuitCheckBoxButton;
	IBOutlet NSButton *focusFollowsMouseCheckBoxButton;
	IBOutlet NSButton *disableCPUsCheckBoxButton;
	IBOutlet NSButton *forceWrapperQuartzWMButton;
	IBOutlet NSButton *forceSystemXQuartzButton;
		
	//change engine window
	IBOutlet NSWindow *changeEngineWindow;
	IBOutlet NSPopUpButton *changeEngineWindowPopUpButton;
	IBOutlet NSButton *engineWindowOkButton;
	
	//busy window
	IBOutlet NSWindow *busyWindow;
	IBOutlet NSProgressIndicator *waitWheel;
	
	//cexe window
	IBOutlet NSWindow *cEXEWindow;
	IBOutlet NSTextField *cEXENameToUseTextField;
	IBOutlet NSTextField *cEXEWindowsExeTextField;
	IBOutlet NSTextField *cEXEFlagsTextField;
	IBOutlet NSButton *cEXEUseStartExeCheckmark;
	IBOutlet NSImageView *cEXEIconImageView;
	IBOutlet NSButton *cEXEBrowseButton;
	IBOutlet NSButton *cEXEIconBrowseButton;
	IBOutlet NSMatrix *cEXEautoOrOvverrideDesktopToggle;
	IBOutlet NSButtonCell *cEXEautoOrOvverrideDesktopToggleAutomaticButton;
	IBOutlet NSMatrix *cEXEFullscreenRootlessToggle;
	IBOutlet NSButtonCell *cEXEFullscreenRootlessToggleRootlessButton;
	IBOutlet NSTabView *cEXEFullscreenRootlesToggleTabView;
	IBOutlet NSMatrix *cEXENormalWindowsVirtualDesktopToggle;
	IBOutlet NSButtonCell *cEXENormalWindowsVirtualDesktopToggleNormalWindowsButton;
	IBOutlet NSPopUpButton *cEXEVirtualDesktopResolution;
	IBOutlet NSPopUpButton *cEXEFullscreenResolution;
	IBOutlet NSPopUpButton *cEXEColorDepth;
	IBOutlet NSPopUpButton *cEXESwitchPause;
	IBOutlet NSSlider *cEXEGammaSlider;
	
	//Winetricks window
	IBOutlet NSWindow *winetricksWindow;
	IBOutlet NSButton *winetricksRunButton;
	IBOutlet NSButton *winetricksCancelButton;
	IBOutlet NSButton *winetricksUpdateButton;
	IBOutlet NSButton *winetricksRefreshButton;
	IBOutlet NSButton *winetricksDoneButton;
	IBOutlet NSProgressIndicator *winetricksWaitWheel;
	IBOutlet NSTextView *winetricksOutputText;
	IBOutlet NSScrollView *winetricksOutputTextScrollView;
	IBOutlet NSOutlineView *winetricksOutlineView;
	IBOutlet NSTabView *winetricksTabView;
	IBOutlet NSTabViewItem *winetricksTabList;
	NSMutableArray *shPIDs;
	BOOL winetricksCanceled;
	NSDictionary *winetricksList;
	NSDictionary *winetricksFilteredList;
	NSMutableDictionary *winetricksSelectedList;
	NSArray *winetricksInstalledList;
	NSArray *winetricksCachedList;
	IBOutlet NSTableColumn *winetricksTableColumnRun;
	IBOutlet NSTableColumn *winetricksTableColumnInstalled;
	IBOutlet NSTableColumn *winetricksTableColumnDownloaded;
	IBOutlet NSTableColumn *winetricksTableColumnName;
	IBOutlet NSTableColumn *winetricksTableColumnDescription;
	IBOutlet NSSearchField *winetricksSearchField;
	IBOutlet NSButton *winetricksCustomCheckbox;
	IBOutlet NSTextField *winetricksCustomLine;
	IBOutlet NSTextField *winetricksCustomLineLabel;
	IBOutlet NSButton *winetricksActionPopup;
	IBOutlet NSMenuItem *winetricksShowDownloadedColumn;
	IBOutlet NSMenuItem *winetricksShowInstalledColumn;
	
	//extensions window
	IBOutlet NSWindow *extAddEditWindow;
	IBOutlet NSTextField *extExtensionTextField;
	IBOutlet NSTextField *extCommandTextField;
	
	//Modify Mappings Window
	IBOutlet NSWindow *modifyMappingsWindow;
	IBOutlet NSTextField *modifyMappingsMyDocumentsTextField;
	IBOutlet NSTextField *modifyMappingsDesktopTextField;
	IBOutlet NSTextField *modifyMappingsMyVideosTextField;
	IBOutlet NSTextField *modifyMappingsMyMusicTextField;
	IBOutlet NSTextField *modifyMappingsMyPicturesTextField;
}

@property (assign) IBOutlet NSWindow *window;
@property (retain) NSDictionary *winetricksList;
@property (retain) NSDictionary *winetricksFilteredList;
@property (retain) NSMutableDictionary *winetricksSelectedList;
@property (retain) NSArray *winetricksInstalledList;
@property (retain) NSArray *winetricksCachedList;

- (void)sleepWithRunLoopForSeconds:(NSInteger)seconds;
- (void)enableButtons;
- (void)disableButtons;
- (void)systemCommand:(NSString *)commandToRun withArgs:(NSArray *)args;
- (NSString *)systemCommandWithOutputReturned:(NSString *)command;
- (IBAction)topMenuHelpSelected:(id)sender;
- (IBAction)aboutWindow:(id)sender;
/* Functions deactivated, not currently being used
- (NSString *)OSVersion;
- (BOOL)theOSVersionIs105;
- (BOOL)theOSVersionIs106;
- (BOOL)theOSVersionIs107;
- (BOOL)theOSVersionIs108;
*/

//main menu methods
- (IBAction)wineskinWebsiteButtonPressed:(id)sender;
- (IBAction)installWindowsSoftwareButtonPressed:(id)sender;
- (IBAction)chooseExeOKButtonPressed:(id)sender;
- (IBAction)setScreenOptionsPressed:(id)sender;
- (IBAction)advancedButtonPressed:(id)sender;
//Installer window methods
- (IBAction)chooseSetupExecutableButtonPressed:(id)sender;
- (IBAction)copyAFolderInsideButtonPressed:(id)sender;
- (IBAction)moveAFolderInsideButtonPressed:(id)sender;
- (IBAction)installerCancelButtonPressed:(id)sender;
- (void)copyMoveFolder:(NSString *)command;

//Screen Options window methods
- (void)saveScreenOptionsData;
- (void)loadScreenOptionsData;
- (IBAction)doneButtonPressed:(id)sender;
- (IBAction)automaticClicked:(id)sender;
- (IBAction)overrideClicked:(id)sender;
- (IBAction)rootlessClicked:(id)sender;
- (IBAction)fullscreenClicked:(id)sender;
- (IBAction)normalWindowsClicked:(id)sender;
- (IBAction)virtualDesktopClicked:(id)sender;
- (IBAction)gammaChanged:(id)sender;
- (IBAction)windowManagerCheckBoxClicked:(id)sender;
- (IBAction)useMacDriverInsteadOfX11CheckBoxClicked:(id)sender;
- (IBAction)useD3DBoostIfAvailableCheckBoxClicked:(id)sender;

//advanced menu
- (IBAction)testRunButtonPressed:(id)sender;
- (IBAction)commandLineWineTestButtonPressed:(id)sender;
- (void)runATestRun;
- (IBAction)killWineskinProcessesButtonPressed:(id)sender;

//advanced menu - Configuration Tab
- (void)saveAllData;
- (void)loadAllData;
- (IBAction)windowsExeBrowseButtonPressed:(id)sender;
- (IBAction)iconToUseBrowseButtonPressed:(id)sender;
- (IBAction)extPlusButtonPressed:(id)sender;
- (IBAction)extMinusButtonPressed:(id)sender;
- (IBAction)extEditButtonPressed:(id)sender;

//advanced menu - Tools Tab
- (IBAction)winecfgButtonPressed:(id)sender;
- (void)runWinecfg;
- (IBAction)uninstallerButtonPressed:(id)sender;
- (void)runUninstaller;
- (IBAction)regeditButtonPressed:(id)sender;
- (void)runRegedit;
- (IBAction)taskmgrButtonPressed:(id)sender;
- (void)runTaskmgr;
- (IBAction)rebuildWrapperButtonPressed:(id)sender;
- (IBAction)refreshWrapperButtonPressed:(id)sender;
- (IBAction)changeEngineUsedButtonPressed:(id)sender;
- (void)setEngineList:(NSString *)theFilter;
- (IBAction)changeEngineUsedOkButtonPressed:(id)sender;
- (IBAction)changeEngineUsedCancelButtonPressed:(id)sender;
- (IBAction)changeEngineSearchFilter:(id)sender;
- (IBAction)updateWrapperButtonPressed:(id)sender;
- (IBAction)logsButtonPressed:(id)sender;
- (IBAction)commandLineShellButtonPressed:(id)sender;
- (void)runCmd;

//advanced menu - Options Tab
- (IBAction)alwaysMakeLogFilesCheckBoxButtonPressed:(id)sender;
- (IBAction)setMaxFilesCheckBoxButtonPressed:(id)sender;
- (IBAction)optSendsAltCheckBoxButtonPressed:(id)sender;
- (IBAction)emulateThreeButtonMouseCheckBoxButtonPressed:(id)sender;
- (IBAction)mapUserFoldersCheckBoxButtonPressed:(id)sender;
- (IBAction)confirmQuitCheckBoxButtonPressed:(id)sender;
- (IBAction)focusFollowsMouseCheckBoxButtonPressed:(id)sender;
- (IBAction)modifyMappingsButtonPressed:(id)sender;
- (IBAction)disableCPUsButtonPressed:(id)sender;
- (IBAction)forceWrapperQuartzWMButtonPressed:(id)sender;
- (IBAction)forceSystemXQuartzButtonPressed:(id)sender;

//Winetricks
- (IBAction)winetricksButtonPressed:(id)sender;
- (IBAction)winetricksDoneButtonPressed:(id)sender;
- (IBAction)winetricksRefreshButtonPressed:(id)sender;
- (IBAction)winetricksUpdateButtonPressed:(id)sender;
- (IBAction)winetricksRunButtonPressed:(id)sender;
- (IBAction)winetricksCancelButtonPressed:(id)sender;
- (IBAction)winetricksSelectAllButtonPressed:(id)sender;
- (IBAction)winetricksSelectNoneButtonPressed:(id)sender;
- (IBAction)winetricksSearchFilter:(id)sender;
- (IBAction)winetricksCustomCommandToggled:(id)sender;
- (IBAction)winetricksToggleColumn:(id)sender;
- (void)winetricksLoadPackageLists;
- (void)setWinetricksBusy:(BOOL)busy;
- (void)runWinetrick;
- (void)doTheDangUpdate;
- (void)winetricksWriteFinished;
- (void)updateWinetrickOutput;
- (NSArray *)makePIDArray:(NSString *)processToLookFor;
// cexe maker
- (IBAction)createCustomExeLauncherButtonPressed:(id)sender;
- (IBAction)cEXESaveButtonPressed:(id)sender;
- (IBAction)cEXECancelButtonPressed:(id)sender;
- (IBAction)cEXEBrowseButtonPressed:(id)sender;
- (IBAction)cEXEIconBrowseButtonPressed:(id)sender;
- (IBAction)cEXEAutomaticButtonPressed:(id)sender;
- (IBAction)cEXEOverrideButtonPressed:(id)sender;
- (IBAction)cEXERootlessButtonPressed:(id)sender;
- (IBAction)cEXEFullscreenButtonPressed:(id)sender;
- (IBAction)cEXEGammaChanged:(id)sender;
//extensions window
- (IBAction)extSaveButtonPressed:(id)sender;
- (IBAction)extCancelButtonPressed:(id)sender;
//modify mappings window
- (IBAction)modifyMappingsSaveButtonPressed:(id)sender;
- (IBAction)modifyMappingsCancelButtonPressed:(id)sender;
- (IBAction)modifyMappingsResetButtonPressed:(id)sender;
- (IBAction)modifyMappingsMyDocumentsBrowseButtonPressed:(id)sender;
- (IBAction)modifyMappingsMyDesktopBrowseButtonPressed:(id)sender;
- (IBAction)modifyMappingsMyVideosBrowseButtonPressed:(id)sender;
- (IBAction)modifyMappingsMyMusicBrowseButtonPressed:(id)sender;
- (IBAction)modifyMappingsMyPicturesBrowseButtonPressed:(id)sender;
//ICE
- (void)installEngine;
// TESTS
- (void)ds:(NSString *)input;

@end
