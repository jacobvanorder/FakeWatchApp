//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCellLayoutManager.h"

@interface PUICTableViewCellLayoutManager : UITableViewCellLayoutManager
{
    _Bool _usingCompactLayout;
    _Bool _compactLayout;
}

+ (double)_likelyFirstLineBaselineOffsetForLabel:(id)arg1;
+ (id)layoutManagerForTableViewCellStyle:(long long)arg1;
+ (void)_setUsesConstraintBasedLayout:(_Bool)arg1;
+ (_Bool)_usesConstraintBasedLayout;
@property(readonly, nonatomic, getter=isCompactLayout) _Bool compactLayout; // @synthesize compactLayout=_compactLayout;
- (struct CGSize)intrinsicContentSizeForCell:(id)arg1 fittingSize:(struct CGSize)arg2;
- (struct CGSize)intrinsicContentSizeForCell:(id)arg1;
- (void)getTextLabelRect:(struct CGRect *)arg1 detailTextLabelRect:(struct CGRect *)arg2 forCell:(id)arg3 fittingSize:(struct CGSize)arg4;
- (void)getTextLabelRect:(struct CGRect *)arg1 detailTextLabelRect:(struct CGRect *)arg2 forCell:(id)arg3;
- (struct CGRect)textRectForCell:(id)arg1 fittingSize:(struct CGSize)arg2;
- (struct CGRect)textRectForCell:(id)arg1;
- (struct CGRect)contentEndingRectForCell:(id)arg1 fittingSize:(struct CGSize)arg2 forDisplayOfDeleteConfirmation:(_Bool)arg3;
- (struct CGRect)contentEndingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(_Bool)arg2;
- (struct CGRect)contentStartingRectForCell:(id)arg1 fittingSize:(struct CGSize)arg2 forDisplayOfDeleteConfirmation:(_Bool)arg3;
- (struct CGRect)contentStartingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(_Bool)arg2;
- (struct CGRect)contentEndingRectForCell:(id)arg1 fittingSize:(struct CGSize)arg2 forNewEditingState:(_Bool)arg3;
- (struct CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)contentStartingRectForCell:(id)arg1 fittingSize:(struct CGSize)arg2 forNewEditingState:(_Bool)arg3;
- (struct CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)selectedBackgroundEndingRectForCell:(id)arg1 fittingSize:(struct CGSize)arg2 forNewEditingState:(_Bool)arg3;
- (struct CGRect)selectedBackgroundEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)backgroundEndingRectForCell:(id)arg1 fittingSize:(struct CGSize)arg2 forNewEditingState:(_Bool)arg3;
- (struct CGRect)backgroundEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)backgroundStartingRectForCell:(id)arg1 fittingSize:(struct CGSize)arg2 forNewEditingState:(_Bool)arg3;
- (struct CGRect)backgroundStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)deleteConfirmationRectForCell:(id)arg1 fittingSize:(struct CGSize)arg2;
- (struct CGRect)deleteConfirmationRectForCell:(id)arg1;
- (_Bool)editingAccessoryShouldFadeForCell:(id)arg1;
- (struct CGRect)editingAccessoryEndingRectForCell:(id)arg1 fittingSize:(struct CGSize)arg2 forNewEditingState:(_Bool)arg3 showingDeleteConfirmation:(_Bool)arg4;
- (struct CGRect)editingAccessoryEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (struct CGRect)editingAccessoryStartingRectForCell:(id)arg1 fittingSize:(struct CGSize)arg2 forNewEditingState:(_Bool)arg3 showingDeleteConfirmation:(_Bool)arg4;
- (struct CGRect)editingAccessoryStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (_Bool)editingAccessoryShouldAppearForCell:(id)arg1;
- (_Bool)accessoryShouldFadeForCell:(id)arg1;
- (struct CGRect)accessoryEndingRectForCell:(id)arg1 fittingSize:(struct CGSize)arg2 forNewEditingState:(_Bool)arg3 showingDeleteConfirmation:(_Bool)arg4;
- (struct CGRect)accessoryEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (struct CGRect)accessoryStartingRectForCell:(id)arg1 fittingSize:(struct CGSize)arg2 forNewEditingState:(_Bool)arg3 showingDeleteConfirmation:(_Bool)arg4;
- (struct CGRect)accessoryStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (_Bool)accessoryShouldAppearForCell:(id)arg1;
- (_Bool)editControlShouldFadeForCell:(id)arg1;
- (struct CGRect)editControlEndingRectForCell:(id)arg1 fittingSize:(struct CGSize)arg2 forNewEditingState:(_Bool)arg3;
- (struct CGRect)editControlEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)editControlStartingRectForCell:(id)arg1 fittingSize:(struct CGSize)arg2 forNewEditingState:(_Bool)arg3;
- (struct CGRect)editControlStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (_Bool)editControlShouldAppearForCell:(id)arg1;
- (struct CGRect)contentRectForCell:(id)arg1 fittingSize:(struct CGSize)arg2 forState:(unsigned long long)arg3;
- (struct CGRect)contentRectForCell:(id)arg1 forState:(unsigned long long)arg2;
- (void)layoutSubviewsOfCell:(id)arg1;
- (double)contentIndentationForCell:(id)arg1;
- (id)editableTextFieldForCell:(id)arg1;
- (id)detailTextLabelForCell:(id)arg1;
- (id)textLabelForCell:(id)arg1;
- (id)imageViewForCell:(id)arg1;
- (id)defaultEditableTextFieldForCell:(id)arg1;
- (id)defaultLabelForCell:(id)arg1;
- (id)defaultLabelForCell:(id)arg1 ofClass:(Class)arg2;
- (id)defaultTextLabelFontForCell:(id)arg1;
- (id)defaultImageViewForCell:(id)arg1;
- (double)defaultTextLabelFontSizeForCell:(id)arg1;
- (struct CGRect)_contentRectForCell:(id)arg1 showingButtonBar:(_Bool)arg2 fittingSize:(struct CGSize)arg3;
- (struct CGRect)_accessoryRectForCell:(id)arg1 showingButtonBar:(_Bool)arg2 fittingSize:(struct CGSize)arg3;
- (struct CGRect)_adjustedBackgroundRectForCell:(id)arg1 showingButtonBar:(_Bool)arg2 fittingSize:(struct CGSize)arg3;
- (struct CGRect)_backgroundRectForCell:(id)arg1 showingButtonBar:(_Bool)arg2 fittingSize:(struct CGSize)arg3;
- (_Bool)_cellHasFullSeparator:(id)arg1;
- (double)_defaultHeightForCell:(id)arg1;
- (id)init;

@end

