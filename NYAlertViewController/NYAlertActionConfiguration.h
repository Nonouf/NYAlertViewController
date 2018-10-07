#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, NYAlertActionButtonStyle) {
    NYAlertActionButtonStyleDefault,
    NYAlertActionButtonStyleRoundRect,
    NYAlertActionButtonStyleCustomClass
};

NS_ASSUME_NONNULL_BEGIN

@interface NYAlertActionConfiguration : NSObject

@property (nonatomic) NYAlertActionButtonStyle buttonStyle;
@property (strong, nonatomic) UIFont *titleFont;

/**
 The color used to display the title for buttons corresponding to the action.
 */
@property (strong, nonatomic) UIColor *titleColor;
@property (strong, nonatomic) UIColor *disabledTitleColor;
@property (strong, nonatomic) UIColor *backgroundColor;
@property (nonatomic) CGFloat cornerRadius;
@property (strong, nonatomic, nullable) Class buttonClass;

@end

NS_ASSUME_NONNULL_END