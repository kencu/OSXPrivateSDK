/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <JavaScriptAppleEvents/JSOCPointer.h>

@interface JSOCFunctionPointer : JSOCPointer
{
    struct ffi_cif _cif;
    unsigned int _numberOfArguments;
    struct _ffi_type *_retType;
    struct _ffi_type **_argTypes;
}

- (void)callWithArguments:(void **)arg1 returnValue:(void *)arg2;
- (void)dealloc;
- (id)initWithPointerValue:(void *)arg1 type:(id)arg2;
- (id)initWithPointerValue:(void *)arg1 type:(id)arg2 additionalArguments:(unsigned int)arg3;

@end
