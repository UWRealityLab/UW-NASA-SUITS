import tensorflow
import keras
import tf2onnx

onnx_model_name = 'lunar_model.onnx'

model = keras.models.load_model('model_TL_UNET.h5')
tensorflow.saved_model.save(model, "tmp_model")

tf2onnx.convert


