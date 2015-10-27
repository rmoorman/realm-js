/* Copyright 2015 Realm Inc - All Rights Reserved
 * Proprietary and Confidential
 */

#import <JavaScriptCore/JavaScriptCore.h>

#ifdef __cplusplus
extern "C" {
#endif

void RJSInitializeInContext(JSContextRef ctx);
void RJSClearTestState(void);

#ifdef __cplusplus
}
#endif
