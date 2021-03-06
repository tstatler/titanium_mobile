/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiProxy.h"

#ifdef USE_TI_UIIOS

#ifdef USE_TI_UIIOSADVIEW
	#import "TiUIiOSAdViewProxy.h"
#endif

#endif

#ifdef USE_TI_UIIOSATTRIBUTEDSTRING
typedef enum {
	AttributeNameFont,
	AttributeNameParagraphStyle,
	AttributeNameForegroundColor,
	AttributeNameBackgroundColor,
	AttributeNameLigature,
	AttributeNameKern,
	AttributeNameStrikethroughStyle,
	AttributeNameUnderlineStyle,
	AttributeNameStrokeColor,
	AttributeNameStrokeWidth,
	AttributeNameShadow,
	AttributeNameVerticalGlyphForm,
	AttributeNameWritingDirection,
	AttributeNameTextEffect,
	AttributeNameAttachment,
	AttributeNameLink,
	AttributeNameBaselineOffset,
	AttributeNameUnderlineColor,
	AttributeNameStrikethroughColor,
	AttributeNameObliqueness,
	AttributeNameExpansion
} AttributeName;

#endif

@interface TiUIiOSProxy : TiProxy {
@private

}
#ifdef USE_TI_UIIOSATTRIBUTEDSTRING
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_FONT;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_PARAGRAPH_STYLE;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_FOREGROUND_COLOR;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_BACKGROUND_COLOR;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_LIGATURE;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_KERN;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_STRIKETHROUGH_STYLE;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_UNDERLINES_TYLE;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_STROKE_COLOR;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_STROKE_WIDTH;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_SHADOW;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_VERTICAL_GLYPH_FORM;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_WRITING_DIRECTION;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_TEXT_EFFECT;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_ATTACHMENT;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_LINK;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_BASELINE_OFFSET;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_UNDERLINE_COLOR;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_STRIKETHROUGH_COLOR;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_OBLIQUENESS;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_EXPANSION;

@property (nonatomic,readonly) NSNumber* ATTRIBUTE_UNDERLINE_STYLE_NONE;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_UNDERLINE_STYLE_SINGLE;
// iOS 7 ----
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_UNDERLINE_STYLE_THICK;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_UNDERLINE_STYLE_DOUBLE;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_UNDERLINE_PATTERN_SOLID;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_UNDERLINE_PATTERN_DOT;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_UNDERLINE_PATTERN_DASH;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_UNDERLINE_PATTERN_DASH_DOT;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_UNDERLINE_PATTERN_DASH_DOT_DOT;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_UNDERLINE_BY_WORD;

@property (nonatomic,readonly) NSNumber* ATTRIBUTE_WRITING_DIRECTION_EMBEDDING;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_WRITING_DIRECTION_OVERRIDE;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_WRITING_DIRECTION_NATURAL;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_WRITING_DIRECTION_LEFT_TO_RIGHT;
@property (nonatomic,readonly) NSNumber* ATTRIBUTE_WRITING_DIRECTION_RIGHT_TO_LEFT;
// -----
#endif

#ifdef USE_TI_UIIOSADVIEW
-(id)createAdView:(id)args;

@property(nonatomic,readonly) NSString* AD_SIZE_PORTRAIT;
@property(nonatomic,readonly) NSString* AD_SIZE_LANDSCAPE;

#endif
#ifdef USE_TI_UIIOS3DMATRIX
-(id)create3DMatrix:(id)args;
#endif
#ifdef USE_TI_UIIOSCOVERFLOWVIEW
-(id)createCoverFlowView:(id)args;
#endif
#ifdef USE_TI_UIIOSTOOLBAR
-(id)createToolbar:(id)args;
#endif
#ifdef USE_TI_UIIOSTABBEDBAR
-(id)createTabbedBar:(id)args;
#endif
#if defined(USE_TI_UIIPADDOCUMENTVIEWER) || defined(USE_TI_UIIOSDOCUMENTVIEWER)
-(id)createDocumentViewer:(id)args;
#endif
#ifdef USE_TI_UIIOSNAVIGATIONWINDOW
-(id)createNavigationWindow:(id)args;
#endif
#ifdef USE_TI_UIIOSATTRIBUTEDSTRING
-(id)createAttributedString:(id)args;
#endif
#ifdef USE_TI_UIIOSANIMATOR
-(id)createAnimator:(id)args;
#ifdef USE_TI_UIIOSSNAPBEHAVIOR
-(id)createSnapBehavior:(id)args;
#endif
#ifdef USE_TI_UIIOSPUSHBEHAVIOR
-(id)createPushBehavior:(id)args;
#endif
#ifdef USE_TI_UIIOSGRAVITYBEHAVIOR
-(id)createGravityBehavior:(id)args;
#endif
#ifdef USE_TI_UIIOSANCHORATTACHMENTBEHAVIOR
-(id)createAnchorAttachmentBehavior:(id)args;
#endif
#ifdef USE_TI_UIIOSVIEWATTACHMENTBEHAVIOR
-(id)createViewAttachmentBehavior:(id)args;
#endif
#ifdef USE_TI_UIIOSCOLLISIONBEHAVIOR
-(id)createCollisionBehavior:(id)args;
#endif
#ifdef USE_TI_UIIOSDYNAMICITEMBEHAVIOR
-(id)createDynamicItemBehavior:(id)args;
#endif
#ifdef USE_TI_UIIOSTRANSITIONANIMATION
-(id)createTransitionAnimation:(id)args;
#endif
#endif
@end

