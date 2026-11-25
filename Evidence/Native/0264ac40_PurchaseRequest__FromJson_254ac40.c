/* IL2CPP: PurchaseRequest$$FromJson
PurchaseRequest_o PurchaseRequest__FromJson (System_String_o* json, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchaseRequest$$FromJson
   PurchaseRequest_o PurchaseRequest__FromJson (System_String_o* json, const MethodInfo* method); */

void PurchaseRequest__FromJson_254ac40(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4c037 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca9a0);
    FUN_021f03f8(PTR_DAT_049b8530);
    FUN_021f03f8(PTR_DAT_049b60c8);
    bRam0000000004f4c037 = 1;
  }
  uVar4 = System_String__IsNullOrEmpty_2f7c924(param_2,0);
  puVar3 = PTR_DAT_049b8530;
  puVar2 = PTR_DAT_049b60c8;
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)PTR_DAT_049b60c8;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_049ca9a0;
    uVar6 = **(undefined8 **)(lVar5 + 0xb8);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar3);
    }
    Newtonsoft_Json_JsonConvert__DeserializeObject___Il2CppFullySharedGenericType__264efe8
              (param_2,uVar6,auStack_80,*(undefined8 *)puVar2);
    func_0x04608620(param_1,auStack_80,0x48);
    if (*(long *)(lVar1 + 0x28) != lStack_38) goto LAB_0264ad60;
  }
  else {
    if (*(long *)(lVar1 + 0x28) != lStack_38) {
LAB_0264ad60:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    param_1[8] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
  }
  return;
}

