/* IL2CPP: TagCarrierSystem$$OnLevelBuildComplete
void TagCarrierSystem__OnLevelBuildComplete (TagCarrierSystem_o* __this, LevelBuildCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TagCarrierSystem$$OnLevelBuildComplete
   void TagCarrierSystem__OnLevelBuildComplete (TagCarrierSystem_o* __this,
   LevelBuildCompleteMessage_o m, const MethodInfo* method); */

void TagCarrierSystem__OnLevelBuildComplete_24acf48(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *aplStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4bb40 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6960);
    FUN_021f03f8(PTR_DAT_049c6968);
    FUN_021f03f8(PTR_DAT_049c6970);
    FUN_021f03f8(PTR_DAT_049c6978);
    FUN_021f03f8(PTR_DAT_049c6980);
    bRam0000000004f4bb40 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  if (((*(long *)(param_1 + 0x48) != 0) &&
      (lVar2 = RemoteConfigModule__GetDataClassNew_object__26a494c
                         (*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_049c6978), lVar2 != 0))
     && (lVar5 = *(long *)(param_1 + 0x50), lVar5 != 0)) {
    uStack_60 = 0;
    uStack_58 = 0;
    cVar1 = *(char *)(lVar2 + 0x10);
    aplStack_50[0] = (long *)0x0;
    lVar2 = *(long *)PTR_DAT_049c6980;
    puVar3 = (undefined8 *)
             thunk_FUN_0224e54c(lVar5,*(long *)(**(long **)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x80)
                                      + 0x60);
    uStack_40 = *puVar3;
    uStack_38 = 0;
    thunk_FUN_021f190c(&uStack_40);
    uStack_38 = 0;
    uStack_58 = 0;
    uStack_60 = uStack_40;
    thunk_FUN_021f190c(&uStack_60,0);
    puVar3 = (undefined8 *)
             thunk_FUN_0224e54c(lVar5,*(long *)(**(long **)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x80)
                                      + 0x80);
    aplStack_50[0] = (long *)*puVar3;
    thunk_FUN_021f190c(aplStack_50);
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    plStack_70 = aplStack_50[0];
    while( true ) {
      uVar4 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_80,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar2 = *(long *)((long)plStack_70 +
                       (ulong)*(uint *)(*plStack_70 + 0x104) * (long)uStack_78._4_4_ + 0x20);
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0xa0) == 0)) break;
      UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(lVar2 + 0xa0),cVar1 != '\0',0);
      TagCarrier__AdjustRotation_24ac568(lVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

