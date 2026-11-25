/* IL2CPP: PurchaseRequest$$ToJson
System_String_o* PurchaseRequest__ToJson (PurchaseRequest_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchaseRequest$$ToJson
   System_String_o* PurchaseRequest__ToJson (PurchaseRequest_o __this, const MethodInfo* method); */

void PurchaseRequest__ToJson_254ab5c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  puVar2 = PTR_DAT_049b60c8;
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4c036 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b8530);
    FUN_021f03f8(PTR_DAT_049b60c8);
    bRam0000000004f4c036 = 1;
  }
  puVar3 = PTR_DAT_049b8530;
  func_0x04608620(auStack_80,param_1,0x48);
  uVar4 = thunk_FUN_0222c66c(*(undefined8 *)puVar2,auStack_80);
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574(lVar5);
    lVar5 = *(long *)puVar2;
  }
  uVar6 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Newtonsoft_Json_JsonConvert__SerializeObject_31b0410(uVar4,uVar6,0);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

