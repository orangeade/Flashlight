//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPResultViewController.h"

#import "NSSplitViewDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSArray, NSString, NSTableColumn, SPTableView;

@interface SPResultTableViewController : SPResultViewController <NSTableViewDelegate, NSTableViewDataSource, NSSplitViewDelegate>
{
    BOOL _updatePending;
    SPTableView *_tableView;
    NSTableColumn *_resultsMainColumn;
    NSArray *_oldResults;
}

@property(retain) NSArray *oldResults; // @synthesize oldResults=_oldResults;
@property __weak NSTableColumn *resultsMainColumn; // @synthesize resultsMainColumn=_resultsMainColumn;
@property __weak SPTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 mainColumnViewForItem:(id)arg2;
- (id)tableView:(id)arg1 groupViewForItem:(id)arg2;
- (id)tableView:(id)arg1 progressViewForItem:(id)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)updateForTableViewSelectionDidChange;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3;
- (id)tableView:(id)arg1 pasteboardWriterForRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)reloadResultsSelectingTopResult:(BOOL)arg1 animate:(BOOL)arg2;
- (void)selectTopResultIfNotSelected;
- (void)doCommand:(unsigned long long)arg1;
- (id)resultsView;
- (long long)numberOfItems;
- (BOOL)currentSelectionIsFirstResult;
- (long long)currentSelection;
- (void)viewDidLoad;
- (void)focusGroup:(id)arg1;
- (void)doubleClick:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)click:(id)arg1;
- (void)engage:(id)arg1 preview:(BOOL)arg2;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 name:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

