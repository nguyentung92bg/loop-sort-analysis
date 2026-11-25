/* IL2CPP: WorldCanvasBase$$GetVideoPlayer
UnityEngine_Video_VideoPlayer_o* WorldCanvasBase__GetVideoPlayer (WorldCanvasBase_o* __this, int32_t role, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WorldCanvasBase$$GetVideoPlayer
   UnityEngine_Video_VideoPlayer_o* WorldCanvasBase__GetVideoPlayer (WorldCanvasBase_o* __this,
   int32_t role, const MethodInfo* method); */

undefined8 WorldCanvasBase__GetVideoPlayer_24986c4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetVideoPlayer_335113c
                    (*(undefined8 *)(param_1 + 0xa0),param_2,0);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

