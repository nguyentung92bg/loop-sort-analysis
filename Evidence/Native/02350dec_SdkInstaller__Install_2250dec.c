/* IL2CPP: SdkInstaller$$Install
void SdkInstaller__Install (SdkInstaller_o* __this, VContainer_IContainerBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SdkInstaller$$Install
   void SdkInstaller__Install (SdkInstaller_o* __this, VContainer_IContainerBuilder_o* builder,
   const MethodInfo* method); */

void SdkInstaller__Install_2250dec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_049b5f10;
                    /* try { // try from 02350df0 to 02450e1f has its CatchHandler @ 02350df0
                       catch() { ... } // from try @ 02350df0 with catch @ 02350df0
                       catch() { ... } // from try @ 02350e3c with catch @ 02350df0 */
  if ((bRam0000000004f49b92 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f18);
                    /* try { // try from 02350e20 to 02450e3b has its CatchHandler @ 02350e5c */
    FUN_021f03f8(PTR_DAT_049b5f20);
    FUN_021f03f8(PTR_DAT_049b5f28);
    FUN_021f03f8(PTR_DAT_049b5f30);
                    /* try { // try from 02350e3c to 02450e6f has its CatchHandler @ 02350df0 */
    FUN_021f03f8(PTR_DAT_049b5f38);
    FUN_021f03f8(PTR_DAT_049b5f40);
                    /* catch() { ... } // from try @ 02350e20 with catch @ 02350e5c */
    FUN_021f03f8(PTR_DAT_049b5f48);
    FUN_021f03f8(PTR_DAT_049b5f50);
    FUN_021f03f8(PTR_DAT_049b5f58);
    FUN_021f03f8(PTR_DAT_049b5f10);
    FUN_021f03f8(PTR_DAT_049b5f60);
    bRam0000000004f49b92 = 1;
  }
  lVar5 = *(long *)puVar1;
  puVar4 = *(undefined8 **)(lVar5 + 0x38);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_02229774(lVar5);
    puVar4 = *(undefined8 **)(lVar5 + 0x38);
  }
  puVar1 = PTR_DAT_049b3bd0;
  uVar6 = *puVar4;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 02350ecc to 02450f37 has its CatchHandler @ 02350ecc
                       catch() { ... } // from try @ 02350ecc with catch @ 02350ecc
                       catch() { ... } // from try @ 02350f4c with catch @ 02350ecc */
  uVar6 = System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
  plVar3 = (long *)FUN_0235c5e4(param_2,uVar6,1,0);
  puVar2 = PTR_DAT_049b5f58;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    lVar5 = *(long *)puVar2;
    puVar4 = *(undefined8 **)(lVar5 + 0x38);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_02229774(lVar5);
      puVar4 = *(undefined8 **)(lVar5 + 0x38);
    }
    uVar6 = *puVar4;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 02350f38 to 02450f4b has its CatchHandler @ 02350f74 */
    uVar6 = System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
                    /* try { // try from 02350f4c to 02450f87 has its CatchHandler @ 02350ecc */
    plVar3 = (long *)FUN_0235c5e4(param_2,uVar6,1,0);
    puVar2 = PTR_DAT_049b5f60;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
      lVar5 = *(long *)puVar2;
      puVar4 = *(undefined8 **)(lVar5 + 0x38);
      if (puVar4 == (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 02350f38 with catch @ 02350f74 */
        FUN_02229774(lVar5);
        puVar4 = *(undefined8 **)(lVar5 + 0x38);
      }
      uVar6 = *puVar4;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar6 = System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
      plVar3 = (long *)FUN_0235c5e4(param_2,uVar6,1,0);
      puVar2 = PTR_DAT_049b5f18;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
        lVar5 = *(long *)puVar2;
        puVar4 = *(undefined8 **)(lVar5 + 0x38);
        if (puVar4 == (undefined8 *)0x0) {
          FUN_02229774(lVar5);
          puVar4 = *(undefined8 **)(lVar5 + 0x38);
        }
        uVar6 = *puVar4;
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar6 = System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
        plVar3 = (long *)FUN_0235c5e4(param_2,uVar6,1,0);
        puVar2 = PTR_DAT_049b5f28;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
          lVar5 = *(long *)puVar2;
          puVar4 = *(undefined8 **)(lVar5 + 0x38);
          if (puVar4 == (undefined8 *)0x0) {
            FUN_02229774(lVar5);
            puVar4 = *(undefined8 **)(lVar5 + 0x38);
          }
          uVar6 = *puVar4;
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar6 = System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
          plVar3 = (long *)FUN_0235c5e4(param_2,uVar6,1,0);
          puVar2 = PTR_DAT_049b5f48;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
            lVar5 = *(long *)puVar2;
            puVar4 = *(undefined8 **)(lVar5 + 0x38);
            if (puVar4 == (undefined8 *)0x0) {
              FUN_02229774(lVar5);
              puVar4 = *(undefined8 **)(lVar5 + 0x38);
            }
            uVar6 = *puVar4;
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar6 = System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
            plVar3 = (long *)FUN_0235c5e4(param_2,uVar6,1,0);
            puVar2 = PTR_DAT_049b5f50;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
              lVar5 = *(long *)puVar2;
              puVar4 = *(undefined8 **)(lVar5 + 0x38);
              if (puVar4 == (undefined8 *)0x0) {
                FUN_02229774(lVar5);
                puVar4 = *(undefined8 **)(lVar5 + 0x38);
              }
              uVar6 = *puVar4;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                FUN_021f0574();
              }
              uVar6 = System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
              plVar3 = (long *)FUN_0235c5e4(param_2,uVar6,1,0);
              puVar2 = PTR_DAT_049b5f30;
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
                lVar5 = *(long *)puVar2;
                puVar4 = *(undefined8 **)(lVar5 + 0x38);
                if (puVar4 == (undefined8 *)0x0) {
                  FUN_02229774(lVar5);
                  puVar4 = *(undefined8 **)(lVar5 + 0x38);
                }
                uVar6 = *puVar4;
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar6 = System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
                plVar3 = (long *)FUN_0235c5e4(param_2,uVar6,1,0);
                puVar2 = PTR_DAT_049b5f20;
                if (plVar3 != (long *)0x0) {
                  (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
                  lVar5 = *(long *)puVar2;
                  puVar4 = *(undefined8 **)(lVar5 + 0x38);
                  if (puVar4 == (undefined8 *)0x0) {
                    FUN_02229774(lVar5);
                    puVar4 = *(undefined8 **)(lVar5 + 0x38);
                  }
                  uVar6 = *puVar4;
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  uVar6 = System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
                  plVar3 = (long *)FUN_0235c5e4(param_2,uVar6,1,0);
                  puVar2 = PTR_DAT_049b5f38;
                  if (plVar3 != (long *)0x0) {
                    (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
                    lVar5 = *(long *)puVar2;
                    puVar4 = *(undefined8 **)(lVar5 + 0x38);
                    if (puVar4 == (undefined8 *)0x0) {
                      FUN_02229774(lVar5);
                      puVar4 = *(undefined8 **)(lVar5 + 0x38);
                    }
                    uVar6 = *puVar4;
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      FUN_021f0574();
                    }
                    uVar6 = System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
                    plVar3 = (long *)FUN_0235c5e4(param_2,uVar6,1,0);
                    puVar2 = PTR_DAT_049b5f40;
                    if (plVar3 != (long *)0x0) {
                      (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
                      lVar5 = *(long *)puVar2;
                      puVar4 = *(undefined8 **)(lVar5 + 0x38);
                      if (puVar4 == (undefined8 *)0x0) {
                        FUN_02229774(lVar5);
                        puVar4 = *(undefined8 **)(lVar5 + 0x38);
                      }
                      uVar6 = *puVar4;
                      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                        FUN_021f0574();
                      }
                      uVar6 = System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
                      plVar3 = (long *)FUN_0235c5e4(param_2,uVar6,1,0);
                      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x023512e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

