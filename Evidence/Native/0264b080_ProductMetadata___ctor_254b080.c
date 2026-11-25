/* IL2CPP: ProductMetadata$$.ctor
void ProductMetadata___ctor (ProductMetadata_o __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProductMetadata$$.ctor
   void ProductMetadata___ctor (ProductMetadata_o __this, System_String_o* productId, const
   MethodInfo* method); */

void ProductMetadata___ctor_254b080(undefined4 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_049ca9d0;
  if ((bRam0000000004f4c03e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca9d0);
    bRam0000000004f4c03e = 1;
  }
  puVar1 = PTR_DAT_049b3bd0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = **(undefined8 **)(*(long *)(puVar1 + 0x90) + 0xb8);
  thunk_FUN_021f190c();
  *(undefined8 *)(param_1 + 4) = **(undefined8 **)(*(long *)(puVar1 + 0x90) + 0xb8);
  thunk_FUN_021f190c();
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = **(undefined8 **)(*(long *)(puVar1 + 0x90) + 0xb8);
  thunk_FUN_021f190c();
  *(undefined8 *)(param_1 + 0xc) = 0;
  thunk_FUN_021f190c(param_1 + 0xc,0);
  uVar3 = System_String__Concat_2f72b28(param_2,*(undefined8 *)puVar2,0);
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  CloudPrefsInt___ctor_24e98a8(&uStack_50,uVar3,0,1,0);
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  *(undefined8 *)(param_1 + 0xe) = uStack_50;
  *(undefined8 *)(param_1 + 0x14) = uStack_38;
  *(undefined8 *)(param_1 + 0x12) = uStack_40;
  thunk_FUN_021f190c(param_1 + 0x10,0);
  return;
}

