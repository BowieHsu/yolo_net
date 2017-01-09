from __future__ import absolute_import
from __future__ import division
from __future__ import print_function

import tensorflow as tf
import argparse
import sys

from tensorflow.examples.tutorials.mnist import input_data

FLAGS = None

#define maxpool and convolv2
def conv2d(x,W):
    return tf.nn.conv2d(x, W, strides= [1,1,1,1], padding = 'SAME')

#what is the meaning of the ksize?
def max_pool_2x2(x):
    return tf.nn.max_pool(x, ksize= [1,2,2,1], strides = [1, 2, 2, 1], padding= 'SAME')

# weight initialization
def weight_variable(shape):
    initial = tf.truncated_normal(shape, stddev=0.1)
    return tf.Variable(initial)


def bias_variable(shape):
    initial = tf.constant(0.1, shape=shape)
    return tf.Variable(initial)

def multi_layer(x,):
    #first convolutional layer
    W_conv1 = weight_variable([5,5,1,32])
    b_conv1 = bias_variable([32])
    x_image = tf.reshape(x, [-1,28,28,-1])

    #convolve input image with weight tensor, apply ReLU, and max pooling
    h_conv1 = tf.nn.relu(conv2d(x_image, W_conv1) + b_conv1)
    h_pool1 = max_pool_2x2(h_conv1)

    #second convolv layer and max pooling layer
    W_conv2 = weight_variable([5,5,32, 64])
    b_conv2 = bias_variable([64])
    h_conv2 = tf.nn.relu(conv2d(h_pool1, W_conv2) + b_conv2)
    h_pool2 = max_pool_2x2(h_conv2)

    #Densely Connected Layer 全连接层
    W_fc1 = weight_variable([7 * 7 * 64, 1024])
    b_fc1 = bias_variable([1024])

    h_pool2_flat = tf.reshape(h_pool2, [-1, 7 *7 * 64])
    h_fc1 = tf.nn.relu(tf.matmul(tf.h_pool2_flat, W_fc1) + b_fc1)

    #Dropout
    keep_prob = tf.placeholder(tf.float32)
    h_fc1_drop = tf.nn.dropout(h_fc1, keep_prob)

    #Readout Layer
    W_fc2 = weight_variable([1024, 10])
    b_fc2 = bias_variable([10])
    y_conv = tf.matmul(h_fc1_drop, W_fc2) + b_fc2

    return y_conv

def main():
     mnist  = input_data.read_data_sets('MINST_data', one_hot= True)
     #定义placeholders

     x= tf.placeholder(tf.float32, shape= [None, 784])
     y_ = tf.placeholder(tf.float32, shape= [None, 10])

     #定义权重与偏移
     W = tf.Variable(tf.zeros([784,10]))
     b = tf.Variable(tf.zeros([10]))

     #prediction and loss function
     y = tf.matmul(x,W) + b
     cross_entropy = tf.reduce_mean(tf.nn.softmax_cross_entropy_with_logits(y, y_))
     train_step = tf.train.GradientDescentOptimizer(0.5).minimize(cross_entropy)

     #optimizer = tf.train.AdamOptimizer(learning_rate=learning_rate).minimize(cost)

     with tf.Session() as sess:
        #sess.run(tf.global_variables_initializer())
        tf.global_variables_initializer().run()

        for i in range(1000):
            batch = mnist.train.next_batch(100)
            sess.run(train_step, feed_dict = {x:batch[0], y_:batch[1]})

        #calculate whether the model output is right or not
        correct_prediction = tf.equal(tf.argmax(y,1), tf.argmax(y_,1))
        accuracy = tf.reduce_mean(tf.cast(correct_prediction, tf.float32))

        print(sess.run(accuracy, feed_dict= {x:mnist.test.images, y_: mnist.test.labels}))


#Train and evaluate the model
if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--data_dir', type=str, default='/tmp/tensorflow/mnist/input_data',
                        help='Directory for storing input data')
    FLAGS, unparsed = parser.parse_known_args()
    main()

