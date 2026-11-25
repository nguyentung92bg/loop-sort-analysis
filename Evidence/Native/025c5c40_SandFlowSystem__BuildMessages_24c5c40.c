/* IL2CPP: SandFlowSystem$$BuildMessages
void SandFlowSystem__BuildMessages (SandFlowSystem_o* __this, MessagePipe_DisposableBagBuilder_o* bag, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$BuildMessages
   void SandFlowSystem__BuildMessages (SandFlowSystem_o* __this, MessagePipe_DisposableBagBuilder_o*
   bag, const MethodInfo* method); */

ulong SandFlowSystem__BuildMessages_24c5c40(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam0000000004f4bbdc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1f08);
    FUN_021f03f8(PTR_DAT_049c70e0);
    FUN_021f03f8(PTR_DAT_049c70e8);
    FUN_021f03f8(PTR_DAT_049c1890);
    FUN_021f03f8(PTR_DAT_049c1f10);
    FUN_021f03f8(PTR_DAT_049c70f0);
    FUN_021f03f8(PTR_DAT_049c1898);
    FUN_021f03f8(PTR_DAT_049c70f8);
    FUN_021f03f8(PTR_DAT_049b3b90);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c7100);
    FUN_021f03f8(PTR_DAT_049c1940);
    FUN_021f03f8(PTR_DAT_049c7108);
    FUN_021f03f8(PTR_DAT_049c6e10);
    FUN_021f03f8(PTR_DAT_049c7110);
    FUN_021f03f8(PTR_DAT_049c7118);
    FUN_021f03f8(PTR_DAT_049c7120);
    FUN_021f03f8(PTR_DAT_049c7128);
    FUN_021f03f8(PTR_DAT_049c7130);
    FUN_021f03f8(PTR_DAT_049c7138);
    FUN_021f03f8(PTR_DAT_049c1f30);
    FUN_021f03f8(PTR_DAT_049c7140);
    FUN_021f03f8(PTR_DAT_049c7148);
    FUN_021f03f8(PTR_DAT_049c18c8);
    FUN_021f03f8(PTR_DAT_049c1418);
    FUN_021f03f8(PTR_DAT_049c1968);
    FUN_021f03f8(PTR_DAT_049c7150);
    FUN_021f03f8(PTR_DAT_049c7158);
    FUN_021f03f8(PTR_DAT_049c7160);
    FUN_021f03f8(PTR_DAT_049c7168);
    FUN_021f03f8(PTR_DAT_049c7170);
    bRam0000000004f4bbdc = 1;
  }
  SystemBase__BuildMessages_2555fa4(param_1,param_2,0);
  if ((*(long *)(param_1 + 0x30) == 0) ||
     (lVar4 = RemoteConfigModule__GetDataClassNew_object__26a494c
                        (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c7100),
     puVar1 = (undefined8 *)PTR_DAT_049c7170, lVar4 == 0)) goto LAB_025c6388;
  if (*(char *)(lVar4 + 0x11) == '\0') {
    if ((*(long *)(param_1 + 0x38) == 0) ||
       (plVar6 = (long *)PlaySessionModule__get_Current_2536d5c(*(long *)(param_1 + 0x38),0),
       plVar6 == (long *)0x0)) goto LAB_025c6388;
    uVar7 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
    cVar2 = *(char *)(lVar4 + 0x10);
    *(byte *)(param_1 + 0x1c1) = (byte)uVar7 & 1;
    if (cVar2 == '\0') {
      if ((uVar7 & 1) == 0) {
        return uVar7;
      }
      goto LAB_025c5e2c;
    }
    if ((uVar7 & 1) == 0) {
      puVar1 = (undefined8 *)PTR_DAT_049c7160;
    }
    uVar5 = *puVar1;
  }
  else {
    *(undefined1 *)(param_1 + 0x1c1) = 1;
LAB_025c5e2c:
    uVar5 = *puVar1;
  }
  uVar5 = UnityEngine_Resources__Load_object__26a73fc(uVar5,*(undefined8 *)PTR_DAT_049c7108);
  *(undefined8 *)(param_1 + 0x160) = uVar5;
  thunk_FUN_021f190c(param_1 + 0x160,uVar5);
  lVar4 = *(long *)(param_1 + 0x160);
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(lVar4 + 0x18);
    uVar8 = *(undefined8 *)(lVar4 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_049c6e10 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar7 = SandFlowRenderer__TryCreate_24be640(uVar5,uVar8,param_1 + 0x168);
    if ((uVar7 & 1) == 0) {
      return uVar7;
    }
    uVar5 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_049c1418);
    *(undefined8 *)(param_1 + 0x180) = uVar5;
    thunk_FUN_021f190c(param_1 + 0x180,uVar5);
    uVar5 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_049c1968);
    *(undefined8 *)(param_1 + 0x2a8) = uVar5;
    thunk_FUN_021f190c(param_1 + 0x2a8,uVar5);
    fVar11 = _UNK_013aa698;
    if (*(long *)(param_1 + 0x160) != 0) {
      fVar10 = *(float *)(*(long *)(param_1 + 0x160) + 0x84);
      *(undefined1 *)(param_1 + 0x2c0) = 1;
      if (fVar11 <= fVar10) {
        fVar11 = fVar10;
      }
      *(float *)(param_1 + 0x1a8) = fVar11;
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar4 = RemoteConfigModule__GetDataClassNew_object__26a494c
                            (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c1940), lVar4 != 0)
         ) {
        uVar5 = *(undefined8 *)PTR_DAT_049b3b90;
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar4 + 0x14);
        uVar5 = thunk_FUN_0222ca34(uVar5);
        UnityEngine_GameObject___ctor_3c1db70(uVar5,*(undefined8 *)PTR_DAT_049c7150,0);
        if (*(int *)(*(long *)PTR_DAT_049c7130 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar8 = SandFlowSystem__CreateLoop_24c638c(uVar5);
        *(undefined8 *)(param_1 + 0x1b0) = uVar8;
        thunk_FUN_021f190c(param_1 + 0x1b0,uVar8);
        uVar5 = SandFlowSystem__CreateLoop_24c638c(uVar5);
        *(undefined8 *)(param_1 + 0x1b8) = uVar5;
        thunk_FUN_021f190c(param_1 + 0x1b8,uVar5);
        uVar8 = *(undefined8 *)(param_1 + 0x90);
        uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c1f08);
        System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                  (uVar5,param_1,*(undefined8 *)PTR_DAT_049c7110,0);
        lVar9 = *(long *)PTR_DAT_049c1f10;
        lVar4 = *(long *)(lVar9 + 0x38);
        if (lVar4 == 0) {
          FUN_02229774(lVar9);
          lVar4 = *(long *)(lVar9 + 0x38);
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02229718();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        lVar4 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02229718();
        }
        uVar5 = MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                          (uVar8,uVar5,**(undefined8 **)(lVar4 + 0xb8),
                           *(undefined8 *)PTR_DAT_049c1f30);
        MessagePipe_DisposableBag__AddTo_2f2c318(uVar5,param_2,0);
        uVar8 = *(undefined8 *)(param_1 + 0x98);
        uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c70e0);
        System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                  (uVar5,param_1,*(undefined8 *)PTR_DAT_049c7120,0);
        lVar9 = *(long *)PTR_DAT_049c70f0;
        lVar4 = *(long *)(lVar9 + 0x38);
        if (lVar4 == 0) {
          FUN_02229774(lVar9);
          lVar4 = *(long *)(lVar9 + 0x38);
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02229718();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        lVar4 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02229718();
        }
        uVar5 = MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                          (uVar8,uVar5,**(undefined8 **)(lVar4 + 0xb8),
                           *(undefined8 *)PTR_DAT_049c7148);
        MessagePipe_DisposableBag__AddTo_2f2c318(uVar5,param_2,0);
        uVar8 = *(undefined8 *)(param_1 + 0xa0);
        uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c1890);
        System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                  (uVar5,param_1,*(undefined8 *)PTR_DAT_049c7128,0);
        lVar9 = *(long *)PTR_DAT_049c1898;
        lVar4 = *(long *)(lVar9 + 0x38);
        if (lVar4 == 0) {
          FUN_02229774(lVar9);
          lVar4 = *(long *)(lVar9 + 0x38);
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02229718();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        lVar4 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02229718();
        }
        uVar5 = MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                          (uVar8,uVar5,**(undefined8 **)(lVar4 + 0xb8),
                           *(undefined8 *)PTR_DAT_049c18c8);
        MessagePipe_DisposableBag__AddTo_2f2c318(uVar5,param_2,0);
        uVar8 = *(undefined8 *)(param_1 + 0xa8);
        uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c70e8);
        System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                  (uVar5,param_1,*(undefined8 *)PTR_DAT_049c7118,0);
        lVar9 = *(long *)PTR_DAT_049c70f8;
        lVar4 = *(long *)(lVar9 + 0x38);
        if (lVar4 == 0) {
          FUN_02229774(lVar9);
          lVar4 = *(long *)(lVar9 + 0x38);
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02229718();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        lVar4 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02229718();
        }
        uVar5 = MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                          (uVar8,uVar5,**(undefined8 **)(lVar4 + 0xb8),
                           *(undefined8 *)PTR_DAT_049c7140);
        uVar7 = MessagePipe_DisposableBag__AddTo_2f2c318(uVar5,param_2,0);
        if (*(char *)(param_1 + 0x1c1) == '\0') {
          return uVar7;
        }
        uVar5 = UnityEngine_Shader__Find_3bdf600(*(undefined8 *)PTR_DAT_049c7168,0);
        *(undefined8 *)(param_1 + 0x240) = uVar5;
        thunk_FUN_021f190c(param_1 + 0x240,uVar5);
        if (*(long *)(param_1 + 0x160) != 0) {
          uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x160) + 0x108);
          if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar7 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
          if ((uVar7 & 1) == 0) {
            lVar4 = UnityEngine_Shader__Find_3bdf600(*(undefined8 *)PTR_DAT_049c7158,0);
          }
          else {
            if (*(long *)(param_1 + 0x160) == 0) goto LAB_025c6388;
            lVar4 = *(long *)(*(long *)(param_1 + 0x160) + 0x108);
          }
          if (*(int *)(*(long *)PTR_DAT_049c7138 + 0xe4) == 0) {
            FUN_021f0574();
          }
          puVar3 = PTR_DAT_049b3b98;
          plVar6 = (long *)(param_1 + 0x1c8);
          if ((bRam0000000004f4bc20 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_049b3b98,plVar6,0);
            FUN_021f03f8(PTR_DAT_049c7138);
            bRam0000000004f4bc20 = 1;
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar7 = UnityEngine_Object__op_Inequality_3c1b96c(lVar4,0,0);
          lVar9 = 0;
          if ((uVar7 & 1) != 0) {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            uVar7 = UnityEngine_Shader__get_isSupported_3bdfae4(lVar4,0);
            lVar9 = 0;
            if ((uVar7 & 1) != 0) {
              lVar9 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c7138);
              SandJellyRenderer___ctor_24d2098(lVar9,lVar4);
            }
          }
          *plVar6 = lVar9;
          thunk_FUN_021f190c(plVar6,lVar9);
          return (ulong)(*plVar6 != 0);
        }
      }
    }
  }
LAB_025c6388:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

