//
//  PASBaseTransitionAnimator.h
//  Pods
//
//  Created by Guillermo Saenz on 6/16/16.
//
//

@import Foundation;
@import UIKit;

typedef NS_ENUM(NSInteger, PASBaseTransitionAnimatorModalAnimatedTransitioningType) {
    PASBaseTransitionAnimatorModalAnimatedTransitioningTypePresent,
    PASBaseTransitionAnimatorModalAnimatedTransitioningTypeDismiss
};

@interface PASBaseTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) PASBaseTransitionAnimatorModalAnimatedTransitioningType transitionType;

- (void)animatePresentingInContext:(id<UIViewControllerContextTransitioning>)transitionContext toVC:(UIViewController *)toVC fromVC:(UIViewController *)fromVC;
- (void)animateDismissingInContext:(id<UIViewControllerContextTransitioning>)transitionContext toVC:(UIViewController *)toVC fromVC:(UIViewController *)fromVC;

@end
