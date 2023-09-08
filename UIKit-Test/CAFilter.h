//
//  CAFilter.h
//  VariableBlurView
//
//  Created by Janum Trivedi on 5/29/23.
//

#import <Foundation/Foundation.h>

@interface CAFilter: NSObject
+ (id)filterWithType:(id)arg1;
@end

typedef struct CAColorMatrix {
    float m11, m12, m13, m14, m15;
    float m21, m22, m23, m24, m25;
    float m31, m32, m33, m34, m35;
    float m41, m42, m43, m44, m45;
} CAColorMatrix;
