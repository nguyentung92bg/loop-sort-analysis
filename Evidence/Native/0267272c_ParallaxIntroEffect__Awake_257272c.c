/* IL2CPP: ParallaxIntroEffect$$Awake
void ParallaxIntroEffect__Awake (ParallaxIntroEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ParallaxIntroEffect$$Awake
   void ParallaxIntroEffect__Awake (ParallaxIntroEffect_o* __this, const MethodInfo* method); */

void ParallaxIntroEffect__Awake_257272c(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  if ((bRam0000000004f4c1e4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bc298);
    bRam0000000004f4c1e4 = 1;
  }
  if (*(long *)(param_3 + 0x20) != 0) {
    lVar1 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049bc298,
                         *(undefined4 *)(*(long *)(param_3 + 0x20) + 0x18));
    plVar2 = (long *)(param_3 + 0x38);
    *plVar2 = lVar1;
    thunk_FUN_021f190c(plVar2,lVar1);
    lVar1 = *(long *)(param_3 + 0x20);
    if (lVar1 != 0) {
      lVar4 = 0;
      uVar3 = 0;
      lVar5 = 0x20;
      do {
        if ((int)*(uint *)(lVar1 + 0x18) <= (int)uVar3) {
          return;
        }
        if (*(uint *)(lVar1 + 0x18) <= uVar3) {
LAB_0267280c:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        if (*(long *)(lVar1 + lVar5) == 0) break;
        lVar6 = *plVar2;
        uVar7 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(*(long *)(lVar1 + lVar5),0);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0267280c;
        lVar6 = lVar6 + lVar4;
        lVar4 = lVar4 + 8;
        lVar5 = lVar5 + 0x10;
        *(undefined4 *)(lVar6 + 0x20) = uVar7;
        *(undefined4 *)(lVar6 + 0x24) = param_2;
        uVar3 = uVar3 + 1;
        lVar1 = *(long *)(param_3 + 0x20);
      } while (lVar1 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

