/* IL2CPP: SandFlowSystem$$GetColor
UnityEngine_Color_o SandFlowSystem__GetColor (SandFlowSystem_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$GetColor
   UnityEngine_Color_o SandFlowSystem__GetColor (SandFlowSystem_o* __this, UnityEngine_Material_o*
   material, const MethodInfo* method); */

undefined4 SandFlowSystem__GetColor_24cea34(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bc02 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c73f0);
    FUN_021f03f8(PTR_DAT_049c73f8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c7130);
    bRam0000000004f4bc02 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,0,0);
  uVar5 = 0x3f800000;
  uVar6 = 0x3f800000;
  uVar7 = 0x3f800000;
  if ((uVar2 & 1) != 0) {
    return 0x3f800000;
  }
  if (*(long *)(param_1 + 0x100) == 0) goto LAB_025cec00;
  uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                    (0x3f800000,*(long *)(param_1 + 0x100),param_2,&uStack_50,
                     *(undefined8 *)PTR_DAT_049c73f8);
  puVar1 = PTR_DAT_049c7130;
  if ((uVar2 & 1) != 0) goto LAB_025cebe4;
  if (*(int *)(*(long *)PTR_DAT_049c7130 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (param_2 == 0) goto LAB_025cec00;
  uVar2 = UnityEngine_Material__HasProperty_3be67a0
                    (param_2,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
  lVar3 = *(long *)puVar1;
  if ((uVar2 & 1) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
      lVar3 = *(long *)puVar1;
    }
    uVar2 = UnityEngine_Material__HasProperty_3be67a0
                      (param_2,*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0xc),0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_021f0574();
        lVar3 = *(long *)puVar1;
      }
      puVar4 = (undefined4 *)(*(long *)(lVar3 + 0xb8) + 0xc);
      goto LAB_025ceb90;
    }
    uStack_40 = 0x3f800000;
    uVar5 = 0x3f800000;
    uVar6 = 0x3f800000;
    uVar7 = 0x3f800000;
  }
  else {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
      lVar3 = *(long *)puVar1;
    }
    puVar4 = (undefined4 *)(*(long *)(lVar3 + 0xb8) + 8);
LAB_025ceb90:
    uStack_40 = UnityEngine_Material__GetColor_3be6388(param_2,*puVar4,0);
  }
  uStack_50 = CONCAT44(uVar5,uStack_40);
  uStack_48 = CONCAT44(uVar7,uVar6);
  if (*(long *)(param_1 + 0x100) != 0) {
    uStack_3c = uVar5;
    uStack_38 = uVar6;
    uStack_34 = uVar7;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (*(long *)(param_1 + 0x100),param_2,&uStack_40,*(undefined8 *)PTR_DAT_049c73f0);
LAB_025cebe4:
    return (undefined4)uStack_50;
  }
LAB_025cec00:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

