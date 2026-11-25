/* IL2CPP: LofeltHapticProvider$$Initialize
void LofeltHapticProvider__Initialize (LofeltHapticProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02fb4d90) */
/* IL2CPP: LofeltHapticProvider$$Initialize
   void LofeltHapticProvider__Initialize (LofeltHapticProvider_o* __this, const MethodInfo* method);
    */

void LofeltHapticProvider__Initialize_22417e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plStack_80;
  long **pplStack_78;
  long lStack_70;
  long *plStack_68;
  undefined4 uStack_58;
  long *plStack_50;
  long alStack_48 [2];
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b53a8;
  if ((bRam0000000004f49b16 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b53a8);
    bRam0000000004f49b16 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b3c68;
  if ((bRam0000000004f4e770 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c68);
    FUN_021f03f8(PTR_DAT_049d7c70);
    FUN_021f03f8(PTR_DAT_049b3c78);
    FUN_021f03f8(PTR_DAT_049b3c80);
    FUN_021f03f8(PTR_DAT_049b3c88);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049b53a8);
    FUN_021f03f8(PTR_DAT_049b3d18);
    FUN_021f03f8(PTR_DAT_049e0b68);
    FUN_021f03f8(PTR_DAT_049e0b70);
    FUN_021f03f8(PTR_DAT_049e0b78);
    FUN_021f03f8(PTR_DAT_049e0b80);
    FUN_021f03f8(PTR_DAT_049e0b88);
    FUN_021f03f8(PTR_DAT_049e0b90);
    FUN_021f03f8(PTR_DAT_049e0b98);
    FUN_021f03f8(PTR_DAT_049b42f0);
    FUN_021f03f8(PTR_DAT_049e0ba0);
    FUN_021f03f8(PTR_DAT_049e0ba8);
    FUN_021f03f8(PTR_DAT_049e0bb0);
    FUN_021f03f8(PTR_DAT_049e0bb8);
    FUN_021f03f8(PTR_DAT_049e0bc0);
    FUN_021f03f8(PTR_DAT_049e0bc8);
    FUN_021f03f8(PTR_DAT_049b42f8);
    bRam0000000004f4e770 = 1;
  }
  plStack_50 = (long *)0x0;
  alStack_48[0] = 0;
  uStack_58 = 0;
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_AndroidJavaClass___ctor_3ba1e70(lVar5,*(undefined8 *)PTR_DAT_049b42f0,0);
  puVar1 = PTR_DAT_049b3cc8;
  plStack_68 = alStack_48;
  lStack_70 = 0;
  alStack_48[0] = lVar5;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_AndroidJavaObject__GetStatic___Il2CppFullySharedGenericType__259e28c
            (lVar5,*(undefined8 *)PTR_DAT_049b42f8,&plStack_80,*(undefined8 *)PTR_DAT_049b3c78);
  puVar3 = PTR_DAT_049b3d18;
  plStack_50 = plStack_80;
  pplStack_78 = &plStack_50;
  plStack_80 = (long *)0x0;
  plVar6 = (long *)FUN_021f04e4(*(undefined8 *)PTR_DAT_049b3d18,1);
  plVar12 = plStack_50;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((plStack_50 != (long *)0x0) &&
     (lVar5 = thunk_FUN_0222c938(plStack_50,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
    uVar7 = thunk_FUN_0223a53c();
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar7,0);
  }
  if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
  plVar6[4] = (long)plVar12;
  thunk_FUN_021f190c(plVar6 + 4,plVar12);
  puVar2 = PTR_DAT_049b3c80;
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b3c80);
  UnityEngine_AndroidJavaObject___ctor_3ba4aec(uVar7,*(undefined8 *)PTR_DAT_049e0bb8,plVar6,0);
  puVar4 = PTR_DAT_049b53a8;
  lVar5 = *(long *)PTR_DAT_049b53a8;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar4;
  }
  **(undefined8 **)(lVar5 + 0xb8) = uVar7;
  thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar7);
  lVar13 = *(long *)PTR_DAT_049b3c88;
  lVar5 = *(long *)(lVar13 + 0x38);
  lVar11 = **(long **)(*(long *)puVar4 + 0xb8);
  if (lVar5 == 0) {
    FUN_02229774(lVar13);
    lVar5 = *(long *)(lVar13 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02229718();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar5 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02229718();
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_AndroidJavaObject__Call___Il2CppFullySharedGenericType__259d220
            (lVar11,*(undefined8 *)PTR_DAT_049e0b90,**(undefined8 **)(lVar5 + 0xb8),&uStack_38,
             *(undefined8 *)PTR_DAT_049d7c70);
  uVar7 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = uStack_38;
  plVar6 = (long *)FUN_021f04e4(uVar7,1);
  plVar12 = plStack_50;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((plStack_50 != (long *)0x0) &&
     (lVar5 = thunk_FUN_0222c938(plStack_50,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
    uVar7 = thunk_FUN_0223a53c();
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar7,0);
  }
  if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
  plVar6[4] = (long)plVar12;
  thunk_FUN_021f190c(plVar6 + 4,plVar12);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  UnityEngine_AndroidJavaObject___ctor_3ba4aec(uVar7,*(undefined8 *)PTR_DAT_049e0bc0,plVar6,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  *puVar8 = uVar7;
  thunk_FUN_021f190c(puVar8,uVar7);
  if (**(long **)(*(long *)puVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar7 = UnityEngine_AndroidJavaObject__GetRawClass_3ba5478(**(long **)(*(long *)puVar4 + 0xb8),0);
  puVar3 = PTR_DAT_049e0b68;
  lVar5 = UnityEngine_AndroidJNIHelper__GetMethodID_3b930e8
                    (uVar7,*(undefined8 *)PTR_DAT_049e0ba0,*(undefined8 *)PTR_DAT_049e0b68,0,0);
  lVar11 = **(long **)(*(long *)puVar4 + 0xb8);
  (*(long **)(*(long *)puVar4 + 0xb8))[3] = lVar5;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar7 = UnityEngine_AndroidJavaObject__GetRawClass_3ba5478(lVar11,0);
  lVar5 = UnityEngine_AndroidJNIHelper__GetMethodID_3b930e8
                    (uVar7,*(undefined8 *)PTR_DAT_049e0ba8,*(undefined8 *)puVar3,0,0);
  lVar11 = **(long **)(*(long *)puVar4 + 0xb8);
  (*(long **)(*(long *)puVar4 + 0xb8))[4] = lVar5;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar7 = UnityEngine_AndroidJavaObject__GetRawClass_3ba5478(lVar11,0);
  puVar3 = PTR_DAT_049e0b98;
  lVar5 = UnityEngine_AndroidJNIHelper__GetMethodID_3b930e8
                    (uVar7,*(undefined8 *)PTR_DAT_049e0b78,*(undefined8 *)PTR_DAT_049e0b98,0,0);
  lVar11 = **(long **)(*(long *)puVar4 + 0xb8);
  (*(long **)(*(long *)puVar4 + 0xb8))[5] = lVar5;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar7 = UnityEngine_AndroidJavaObject__GetRawClass_3ba5478(lVar11,0);
  lVar5 = UnityEngine_AndroidJNIHelper__GetMethodID_3b930e8
                    (uVar7,*(undefined8 *)PTR_DAT_049e0bc8,*(undefined8 *)PTR_DAT_049e0b80,0,0);
  lVar11 = **(long **)(*(long *)puVar4 + 0xb8);
  (*(long **)(*(long *)puVar4 + 0xb8))[6] = lVar5;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar7 = UnityEngine_AndroidJavaObject__GetRawClass_3ba5478(lVar11,0);
  uVar7 = UnityEngine_AndroidJNIHelper__GetMethodID_3b930e8
                    (uVar7,*(undefined8 *)PTR_DAT_049e0b88,*(undefined8 *)puVar3,0,0);
  lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38) = uVar7;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar7 = UnityEngine_AndroidJavaObject__GetRawClass_3ba5478(lVar5,0);
  uVar7 = UnityEngine_AndroidJNIHelper__GetMethodID_3b930e8
                    (uVar7,*(undefined8 *)PTR_DAT_049e0bb0,*(undefined8 *)PTR_DAT_049e0b70,0,0);
  plVar12 = plStack_50;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40) = uVar7;
  if (plStack_50 != (long *)0x0) {
    lVar11 = *plStack_50;
    lVar5 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02fb4ce0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plStack_50,lVar5,0);
LAB_02fb4ce0:
    (*(code *)*puVar8)(plVar12,puVar8[1]);
  }
  plVar12 = (long *)*plStack_68;
  if (plVar12 != (long *)0x0) {
    lVar11 = *plVar12;
    lVar5 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02fb4d48;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plVar12,lVar5,0);
LAB_02fb4d48:
    (*(code *)*puVar8)(plVar12,puVar8[1]);
  }
  if (lStack_70 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0698();
  }
  return;
}

