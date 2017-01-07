from __future__ import absolute_import
from __future__ import division
from __future__ import print_function

import tensorflow as tf
import cifar10

FLAGS = tf.app.flags.FLAGS

def download(argv=None):
	cifar10.maybe_download_and_extract()
	print("download_complete!")


if __name__ == '__main__':
	print(FLAGS.train_dir)
